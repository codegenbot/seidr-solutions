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
    assert(cycpattern_check("abcd", "bcda") == true);
    assert(cycpattern_check("hello", "world") == false);
    assert(cycpattern_check("abc", "cba") == true);

    return 0;
}