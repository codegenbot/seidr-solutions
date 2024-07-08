```cpp
#include <string>
#include <cctype>
#include <cassert>
#include <iostream>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (std::isalpha(c)) {
            switch (std::tolower(c)) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    break;
                default:
                    result += std::tolower(c);
            }
        } else {
            result += c;
        }
    }
    return result;
}

int mainFunc() {
    assert(remove_vowels("ybcd") == "bcd");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}