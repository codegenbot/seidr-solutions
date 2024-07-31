#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }

    std::string doubleA = a + a;

    return doubleA.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);

    return 0;
}