#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(string a, string b) {
    int len_b = b.length();
    string rotated_b = b;
    for (int i = 0; i < len_b; ++i) {
        if (a.find(rotated_b) != string::npos) {
            return true;
        }
        rotated_b = rotated_b.substr(1) + rotated_b[0];
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    return 0;
}