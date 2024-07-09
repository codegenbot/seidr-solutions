#include <string>

std::string getClosestVowel(const std::string& word) {
    std::string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            int left = i - 1;
            while (left >= 0 && !isVowel(word[left--]));
            if (left < i) {
                result = word.substr(left + 1, i - left);
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