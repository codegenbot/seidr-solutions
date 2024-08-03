#include <iostream>
#include <string>
#include <cassert>

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

int main() {
    std::string input;
    std::getline(std::cin, input);
    assert(flip_case(input) == "these violent delights have violent ends");
    return 0;
}