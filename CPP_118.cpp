#include <string>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    int closest = -1;
    
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            if (closest == -1) closest = i;
            else return word.substr(closest, i - closest);
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