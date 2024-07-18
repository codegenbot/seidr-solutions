#include <string>

std::string get_closest_vowel(std::string word){
    std::string vowels = "AEIOUaeiou";
    int closest_distance = word.length();
    int closest_vowel_index = -1;
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != std::string::npos) {
            closest_vowel_index = i;
            break;
        }
    }
    
    if (closest_vowel_index == -1) {
        return "";
    }
    
    for (int i = closest_vowel_index - 1; i > 0; i--) {
        if (vowels.find(word[i]) == std::string::npos) {
            return std::string(1, word[closest_vowel_index]);
        }
    }
    
    return "";
}