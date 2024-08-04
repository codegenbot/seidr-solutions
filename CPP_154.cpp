#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(const string& a, const string& b) {
    return (a.size() == b.size() && (a + a).find(b) != string::npos);
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);

    assert(cycpattern_check("abcd", "cdab") == true);
    assert(cycpattern_check("hello", "llohe") == true);
    assert(cycpattern_check("xyz", "zxy") == true);
    
    assert(cycpattern_check("apple", "banana") == false);
    assert(cycpattern_check("hi", "hello") == false);

    cout << "All test cases passed." << endl;

    return 0;
}