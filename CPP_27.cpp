#include <cctype>
#include <string>
#include <iostream>

std::string filp_case(const std::string& str) {
    std::string result = str;
    for (char &c : result) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return result;
}

int main() {
    std::cout << filp_case("These violent delights have violent ends") << std::endl;
    return 0;
}