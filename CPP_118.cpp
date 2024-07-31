#include <string>

std::string get_closest_vowel(std::string word){
    std::string vowels = "aeiouAEIOU";
    int closest_distance = word.length();
    int closest_index = -1;
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != std::string::npos) {
            for (int j = i - 1; j > 0; j--) {
                if (vowels.find(word[j]) == std::string::npos) {
                    int distance = i - j;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_index = i;
                    }
                    break;
                }
            }
        }
    }
    
    if (closest_index != -1) {
        return std::string(1, word[closest_index]);
    } else {
        return "";
    }
}