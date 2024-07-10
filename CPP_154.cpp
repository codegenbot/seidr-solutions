#include <string>

bool cycpattern_check(const std::string& a, const std::string& b) {
    if (a.empty() && b.empty()) {
        return true;
    }
    return a.size() == b.size() && (a + a).find(b) != std::string::npos;
}