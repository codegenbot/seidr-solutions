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
    return str;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string result = flip_case(input);
    assert(result == "ThESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::cout << result << std::endl;
    return 0;
}