#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    int n = a.size();
    int m = b.size();
    if (n != m) return false;
    std::string temp = a + a;
    return temp.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("abcabc", "abc"));
    assert(!cycpattern_check("abcabc", "cba"));
    assert(cycpattern_check("hellohello", "hello"));
    return 0;
}