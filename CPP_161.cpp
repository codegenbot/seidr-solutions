#include <string>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            result += "0";
        } else {
            result += c;
        }
    }
    return result;
}