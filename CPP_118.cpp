#include <string>
#include <cctype>

std::string getClosestVowel(std::string word) {
    std::string result = "";
    int closestIndex = -1;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            if (closestIndex == -1 || i < closestIndex)
                closestIndex = i;
        }
    }
    if (closestIndex != -1)
        result = word.substr(closestIndex, 1);
    return result;
}

bool isVowel(char c) {
    return std::tolower(c) == 'a' || 
           std::tolower(c) == 'e' || 
           std::tolower(c) == 'i' || 
           std::tolower(c) == 'o' || 
           std::tolower(c) == 'u';