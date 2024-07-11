#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.length();
    int m = b.length();
    if (n != m) return false;
    
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);

    return 0;
}