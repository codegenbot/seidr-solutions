#include <string>
#include <cassert>

bool cycpattern_check(const std::string &a, const std::string &b) {
    if (a.length() != b.length())
        return false;

    std::string combined = a + a;

    if (combined.find(b) != std::string::npos)
        return true;

    return false;
}