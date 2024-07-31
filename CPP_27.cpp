#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str);

int solveProblem() {
    assert(flip_case("THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS") == "these violent delights have violent ends");
    return 0;
}

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