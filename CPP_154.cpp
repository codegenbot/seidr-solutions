#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(string a, string b) {
    int len = b.length();
    string rotated = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(rotated.substr(i, len)) != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    cout << "Test passed!" << endl;
    return 0;
}