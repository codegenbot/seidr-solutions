#include <iostream>
#include <cstring>
#include <string>

std::string remove_vowels(const std::string &text) {
    std::string result;
    for (char c : text) {
        if (!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << remove_vowels(input) << std::endl;
    return 0;
}