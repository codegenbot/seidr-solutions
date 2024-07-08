#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return str; // Return the modified string
}

int main() {
    assert(flip_case("Hello, World!") == "hELLO, wORLD!");
    return 0;
}