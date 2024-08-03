#include <string>
#include <cassert>

std::string get_closest_vowel(std::string word);

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = '\0';
    
    for (int i = word.size() - 1; i >= 0; i--) {
        if (vowels.find(word[i]) != std::string::npos) {
            closest_vowel = word[i];
            break;
        }
    }
    
    if (closest_vowel == '\0') {
        return "";
    }
    
    return std::string(1, closest_vowel);
}