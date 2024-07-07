#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (std::islower(c)) {
            result += std::toupper(c);
        } else if (std::isupper(c)) {
            result += std::tolower(c);
        } else {
            result += c;
        }
    }
    return result;