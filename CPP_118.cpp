```cpp
#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word) {
    for (int i = word.length() - 1; i >= 0; i--) {
        if ((word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') ||
            (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')) {
            for (int j = i - 1; j >= 0; j--) {
                if (!((word[j] == 'a' && word[i] != 'A') ||
                     (word[j] == 'e' && word[i] != 'E') ||
                     (word[j] == 'i' && word[i] != 'I') ||
                     (word[j] == 'o' && word[i] != 'O') ||
                     (word[j] == 'u' && word[i] != 'U'))) {
                    return word.substr(j, i - j + 1);
                }
            }
        }
    }
    return "";
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Closest vowel pair: " << get_closest_vowel(str) << std::endl;
    return 0;
}