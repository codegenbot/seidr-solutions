#include <iostream>
#include <string>

int main() {
    std::string text = "ybcd";
    std::cout << remove_vowels(text) << std::endl;
    return 0;
}

std::string remove_vowels(const std::string& text) {
    std::string vowels = "aeiou";
    std::string result;
    for (auto c : text) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}