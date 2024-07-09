#include <string>

std::string getClosestVowel(std::string word) {
    std::string result = "";
    for (int i = 0; i < word.length(); ++i) {
        if (isVowel(word[i])) {
            int right = i;
            while (right < word.length() && !isVowel(word[right])) ++right;
            if (right > i) {
                result = word.substr(i, right - i);
                break;
            }
        }
    }
    return result;
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u' || c == 'A' || 
           c == 'E' || c == 'I' || c == 'O' || 
           c == 'U';
}