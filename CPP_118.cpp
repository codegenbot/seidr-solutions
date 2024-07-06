#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0, right = word.size() - 1;
    
    while (left <= right && (!isvowel(word[left]) || !isconsonant(word[right]))) {
        if (!isvowel(word[left])) {
            left++;
        } else if (!isconsonant(word[right])) {
            right--;
        }
    }
    
    for (int i = 0; i < word.size(); i++) {
        if (isvowel(word[i])) {
            return string(1, word[i]);
        }
    }
    
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}