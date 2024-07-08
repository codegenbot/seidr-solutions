```cpp
#include <string>
#include <cctype>
#include <cassert>
#include <iostream>

std::string remove_vowels(std::string text) {
    std::string result = "";
    for (char c : text) {
        if (!(std::iscntrl(c) && std::isalpha(c))) {
            if (!isvowel(c)) {
                if (isupper(c))
                    result += tolower(c);
                else
                    result += c;
            }
        }
    }
    return result;
}

int mainFunc() {
    assert(remove_vowels("ybcd") == "ybcd");
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "String after removing vowels: " << remove_vowels(input) << std::endl;
    return 0;
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}