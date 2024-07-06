#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word) {
    for (int i = word.length() - 1; i > 0; i--) {
        if ("aeiouAEIOU".find(word[i]) != std::string::npos) {
            for (int j = i - 1; j >= 0; j--) {
                if ("aeiouAEIOU".find(word[j]) != std::string::npos) {
                    return word.substr(j, i - j + 1);
                }
            }
        }
    }
    return "";
}

int main() {
    std::cout << get_closest_vowel("hello"); // Test the function
    return 0;
}