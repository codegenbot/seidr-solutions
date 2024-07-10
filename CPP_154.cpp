#include <string>

bool cycpattern_check(const std::string& a, const std::string& b) {
    return a.size() == b.size() && (a + a).find(b) != std::string::npos && a.find(b) == std::string::npos;
}