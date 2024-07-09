#include <string>

std::string getClosestVowel(const std::string& word) {
    int closestIndex = -1;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            closestIndex = i;
            break;
        }
    }

    if (closestIndex != -1) {
        return word.substr(closestIndex, 1);
    } else {
        return "";
    }
}

bool isVowel(char c) {
    return std::string(1, c).find_first_of("aeiouAEIOU") != std::string::npos;
}