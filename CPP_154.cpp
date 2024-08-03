#include <string>
bool cycpattern_check(const std::string &a, const std::string &b) {
    std::string s = a + a;
    return s.find(b) != std::string::npos;
}