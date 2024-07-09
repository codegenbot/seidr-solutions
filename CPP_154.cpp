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
    assert(cycpattern_check("abc", "cab"));
    assert(!cycpattern_check("abc", "bac"));
    assert(cycpattern_check("hello", "lohel"));
    assert(!cycpattern_check("hello", "hello"));
    
    return 0;
}