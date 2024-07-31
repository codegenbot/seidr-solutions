#include <string>
#include <cassert>

bool cycpattern_check(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }
    
    string doubleA = a + a;
    
    return doubleA.find(b) != string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    // Add more test cases here...

    return 0;
}