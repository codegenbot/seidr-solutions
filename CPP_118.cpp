#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' || 
            std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' || 
            std::tolower(word[i]) == 'u') {
            return word.substr(i, 1);
        }
    }
    return "";
}