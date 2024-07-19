#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return str;
}

std::cout << flip_case("These violent delights have violent ends") << std::endl;