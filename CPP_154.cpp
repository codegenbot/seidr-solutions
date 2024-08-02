#include <string>

bool cycpattern_check(string a, string b) {
    string temp = a + a;
    return temp.find(b) != string::npos;
}

int main() {
    assert(cycpattern_check("abc", "cab")); // returns true
    assert(!cycpattern_check("abc", "bac")); // returns false
    return 0;
}