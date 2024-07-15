#include <string>
#include <cctype>
#include <cassert>

std::string flipCase(const std::string &str);

std::string flipCase(const std::string &str) {
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