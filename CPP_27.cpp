#include <string>
#include <cctype>
#include <iostream>
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

std::string input;
std::getline(std::cin, input);

std::string output = flip_case(input);

std::cout << output << std::endl;

assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");