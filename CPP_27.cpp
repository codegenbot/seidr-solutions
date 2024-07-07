#include <string>
#include <cctype>
#include <iostream>
#include <cassert>

std::string flip_case(std::string str) {
    std::string flipped = str;
    for (char & c : flipped) { 
        if (std::islower(c)) {
            c = std::toupper(c);
        } else {
            c = std::tolower(c);
        }
    }
    return flipped; 
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOlENT dElIgHTs HaVe ViOlENT EnDs");
    return 0;