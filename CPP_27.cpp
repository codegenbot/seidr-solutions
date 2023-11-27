#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
#include <algorithm>

std::string flip_case(std::string str) {
    for (auto& c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}