#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    return a.size() == b.size() && (a + a).find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("abc", "cab"));
    assert(!cycpattern_check("abc", "bac"));
    assert(cycpattern_check("winemtt", "tinem"));
    return 0;
}