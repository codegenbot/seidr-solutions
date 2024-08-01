#include <string>
#include <cassert>

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    std::string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (consonants.find(word[i]) != std::string::npos && vowels.find(word[i-1]) != std::string::npos && consonants.find(word[i-2]) != std::string::npos) {
            return std::string(1, word[i-1]);
        }
    }
    
    return "";
}