bool cycpattern_check(const std::string& a, const std::string& b) {
    return (a + a).find(b) != std::string::npos;
}

#include <cassert>

int main() {
    std::string a = "winemtt";
    std::string b = "tinem";
    assert(cycpattern_check(a, b) == true);
}