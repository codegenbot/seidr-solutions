#include <iostream>
#include <string>
#include <algorithm>

std::string remove_vowels(std::string text) {
    std::string result = "";
    std::string vowels = "aeiouAEIOU";

    for (char c : text) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }

    return result;
}

int main() {
    std::string text;
    std::getline(std::cin, text);

    std::cout << remove_vowels(text) << std::endl;

    return 0;
}