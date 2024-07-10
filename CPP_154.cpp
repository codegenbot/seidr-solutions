#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool cycpattern_check(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }

    string combined = a + a;

    return combined.find(b) != string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);

    return 0;
}