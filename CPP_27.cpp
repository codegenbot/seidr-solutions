#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return str;
}

std::cout << flip_case("These violent delights have violent ends") << std::endl;