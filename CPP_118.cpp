#include <string>

std::string getClosestVowel(const std::string& word) {
    int closestIndex = -1;
    char closestChar = '\0';
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            if (closestIndex == -1 || i < closestIndex) {
                closestIndex = i;
                closestChar = word[i];
            }
        }
    }
    return closestChar + "";
}