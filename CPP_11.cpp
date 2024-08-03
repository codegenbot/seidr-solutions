#include <string>

std::string compareStrings(const std::string &a, const std::string &b) {
    std::string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}