#include <string>

bool cycpattern_check(std::string a, std::string b) {
    if (a.find(b) != std::string::npos) {
        return true;
    }
    for (int i = 0; i < b.length() - 1; i++) {
        std::rotate(b.begin(), b.begin() + 1, b.end());
        if (a.find(b) != std::string::npos) {
            return true;
        }
    }
    return false;
}