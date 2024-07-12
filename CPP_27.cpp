#include <algorithm>
#include <cctype>
#include <iostream>

std::string filp_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (::isupper(c)) {
            result += ::tolower(c);
        } else if (::islower(c)) {
            result += ::toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input = "These violent delights have violent ends";
    assert(filp_case(input) == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::cout << filp_case(input) << std::endl;
    return 0;
}