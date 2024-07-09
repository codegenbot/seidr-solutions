#include <string>
#include <cctype>

std::string getClosestVowel(const std::string& word) {
    std::string result;
    for (int i = word.length() - 1; i > 0; --i) {
        if (std::tolower(word[i]) == 'a' || 
            std::tolower(word[i]) == 'e' || 
            std::tolower(word[i]) == 'i' || 
            std::tolower(word[i]) == 'o' || 
            std::tolower(word[i]) == 'u') {
            int left = i - 1;
            while (left >= 0 && !isVowel(word[left])) --left;
            if (left < i - 1) {
                result = word.substr(left + 1, i - left - 1);
                break;
            }
        }
    }
    return result;
}

bool isVowel(char c) {
    return std::tolower(c) == 'a' || 
           std::tolower(c) == 'e' || 
           std::tolower(c) == 'i' || 
           std::tolower(c) == 'o' || 
           std::tolower(c) == 'u';
}