#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    return 0;
}