#include <string>

std::string flip_case(std::string str) {
    std::string result;
    for (char &c : str) {
        c = std::toupper(c);
        if (std::islower(c)) {
            c = std::tolower(c);
        }
    }
    return result;  // return the modified string
}