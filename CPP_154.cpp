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
    assert(cycpattern_check("abcd", "cdab") == true);
    assert(cycpattern_check("abcde", "deabc") == true);
    assert(cycpattern_check("abc", "ac") == false);

    return 0;
}