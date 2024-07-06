#include <cctype>
#include <string>

std::string get_closest_vowel(std::string word) {
    int left = 0, right = word.size() - 1;
    
    while (left < right && (!isvowel(word[left]) || !isconsonant(word[right]))) {
        if (!isvowel(word[left])) {
            left++;
        } else if (!isconsonant(word[right])) {
            right--;
        }
    }
    
    for (int i = left; i <= right; i++) {
        if (isvowel(word[i])) {
            return std::string(1, word[i]);
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