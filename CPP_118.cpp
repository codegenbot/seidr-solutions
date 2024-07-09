#include <string>

std::string getClosestVowel(const std::string& word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            int left = i;
            while (left > 0 && !isVowel(word[left - 1])) --left;
            return word.substr(left, i - left + 1);
        }
    }
    return "";
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u' || c == 'A' || 
           c == 'E' || c == 'I' || c == 'O' || 
           c == 'U';
}