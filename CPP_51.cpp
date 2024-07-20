#include <iostream>
#include <algorithm>
#include <string>

std::string remove_vowels(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) { return std::strchr("aeiouAEIOU", c) != NULL; }), text.end());
    return text;
}

int main() {
    std::string text;
    std::cin >> text;
    std::cout << remove_vowels(text) << std::endl;
    return 0;
}