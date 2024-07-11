#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word) {
    std::string vowels = "AEIOUaeiou";
    int closest_dist = word.length();
    char closest_vowel = '\0';
    
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != std::string::npos) {
            for (int j = i - 1; j > 0; j--) {
                if (vowels.find(word[j]) == std::string::npos) {
                    int dist = i - j;
                    if (dist < closest_dist) {
                        closest_dist = dist;
                        closest_vowel = word[i];
                    }
                    break;
                }
            }
        }
    }
    
    if (closest_vowel != '\0') {
        return std::string(1, closest_vowel);
    }

    return "";
}

int main() {
    std::string word;
    std::cin >> word;

    std::cout << get_closest_vowel(word) << std::endl;

    return 0;
}