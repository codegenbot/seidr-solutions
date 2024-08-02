#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    std::string temp = a + a;
    return temp.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("abc", "cab"));
    assert(!cycpattern_check("abc", "bac"));
    assert(cycpattern_check("hello", "lohel"));
    return 0;
}