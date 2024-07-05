#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(const string& a, const string& b) {
    int len = b.length();
    string temp = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(temp.substr(i, len)) != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    cout << "All tests passed!" << endl;
    return 0;
}