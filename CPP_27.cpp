#include <cctype>

const char* flip_case(const char* str) {
    const char* result = "";
    for (const char c : str) {
        if (std::islower(c)) {
            result += std::toupper(c);
        } else if (std::isupper(c)) {
            result += std::tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}