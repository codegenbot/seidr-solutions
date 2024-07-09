#include <string>
#include <cassert>

bool cycpattern_check(const string& a, const string& b) {
    if(a.length() != b.length()) return false;
    string temp = b + b;
    return (temp.find(a) != string::npos);
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    
    return 0;
}