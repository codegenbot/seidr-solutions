#include <string>
#include <cctype>

std::string getClosestVowel(std::string word) {
    std::string result = "";
    int i = word.length() - 1;
    while (i >= 0) {
        if (isVowel(word[i])) {
            int left = i - 1;
            while (left >= 0 && !isVowel(word[left--]));
            if (left < i) {
                result = word.substr(left + 1, i - left);
                break;
            }
        }
        --i;
    }
    return result;
}

bool isVowel(char c) {
    return std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
           std::tolower(c) == 'i' || std::tolower(c) == 'o' || 
           std::tolower(c) == 'u';
}