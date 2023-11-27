#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(const std::string& str) {
    std::string flipped = str;
    for (int i = 0; i < flipped.length(); i++) {
        if (std::islower(flipped[i])) {
            flipped[i] = std::toupper(flipped[i]);
        } else if (std::isupper(flipped[i])) {
            flipped[i] = std::tolower(flipped[i]);
        }
    }
    return flipped;
}

int main() {
    assert(flip_case(std::string("These violent delights have violent ends")) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}