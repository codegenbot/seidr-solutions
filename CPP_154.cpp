#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    std::string temp = a + a;
    return temp.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("abc", "cab")); // returns true
    assert(!cycpattern_check("abc", "bac")); // returns false
    assert(cycpattern_check("abcd", "cdab")); // returns true
    return 0;
}