#include <string>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.size();
    int m = b.size();
    if (n != m) return false;
    std::string temp = b + b;
    return (temp.find(a) != std::string::npos);
}