#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    // Add more test cases if needed
    return 0;
}