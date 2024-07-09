#include <string>

std::string getClosestVowel(std::string word) {
    std::string result = "";
    int closestIndex = -1;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            if (closestIndex == -1)
                closestIndex = i;
            else if (abs(closestIndex - i) < abs(i - (word.length() - 1)))
                closestIndex = i;
        }
    }
    return word.substr(closestIndex, 1);
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u' || c == 'A' || 
           c == 'E' || c == 'I' || c == 'O' || 
           c == 'U';
}