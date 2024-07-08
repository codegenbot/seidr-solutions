#include <string>
#include <cctype>
#include <cassert>
#include <iostream>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!(std::iscntrl(c) && std::isalpha(c))) {
            switch (std::tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    break;
                default:
                    result += c;
            }
        }
    }
    return result;
}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}