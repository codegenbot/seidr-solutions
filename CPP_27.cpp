#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    for (char &c : str) {
        c = std::toupper(c);
        if (std::islower(c)) {
            c = std::tolower(c);
        }
    }
    return str;
}