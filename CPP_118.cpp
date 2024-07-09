#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word);

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    char closest_vowel = ' ';

    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != std::string::npos) {
            for (int j = i + 1; j < word.size(); j++) {
                if (vowels.find(word[j]) == std::string::npos) {
                    int distance = j - i;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_vowel = word[i];
                    }
                    break;
                }
            }
        }
    }

    if (closest_vowel == ' ') {
        return "";
    } else {
        return std::string(1, closest_vowel);
    }
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    std::cout << "Closest vowel: " << get_closest_vowel(word) << std::endl;

    return 0;
}