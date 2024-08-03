#include <string>

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int closest_index = -1;

    for (int i = word.size() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != std::string::npos) {
            closest_index = i;
            break;
        }
    }

    if (closest_index == -1) {
        return "";
    }

    for (int i = closest_index - 1; i >= 0; --i) {
        if (vowels.find(word[i]) == std::string::npos) {
            return std::string(1, word[closest_index]);
        }
    }

    return "";
}