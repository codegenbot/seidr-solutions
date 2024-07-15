#include <string>
bool cycpattern_check(std::string a, std::string b) {
    std::string combined = a + a;
    if (combined.find(b) != std::string::npos) {
        return true;
    }
    return false;
}