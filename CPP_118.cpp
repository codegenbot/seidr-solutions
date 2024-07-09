#include <string>

std::string getClosestVowel(const std::string& word) {
    std::string result = "";
    int closestIndex = -1;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            if (closestIndex == -1 || i < closestIndex)
                closestIndex = i;
        }
    }
    if (closestIndex != -1) {
        result = word.substr(closestIndex, 1);
    } else
        result = "No vowel found";
    return result;
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u' || c == 'A' || 
           c == 'E' || c == 'I' || c == 'O' || 
           c == 'U';
}