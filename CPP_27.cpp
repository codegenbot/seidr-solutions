#include <cassert>
#include <string>

std::string flip_case(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (isalpha(c)) {
            if (islower(c))
                result += toupper(c);
            else
                result += tolower(c);
        } else
            result += c;
    }
    return result;