#include <string>

bool cycpattern_check(std::string a, std::string b) {
    return a.size() == b.size() && (a+a).find(b) != std::string::npos;
}