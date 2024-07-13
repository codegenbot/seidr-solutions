#include <cctype>

string filp_case(string str) {
    string result = "";
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
}