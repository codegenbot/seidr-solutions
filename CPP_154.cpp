#include <iostream>
#include <string>

using namespace std;

bool cycpattern_check(string a, string b) {
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
    cout << boolalpha;
    cout << (cycpattern_check("winemtt", "tinem") == true) << endl;
    return 0;
}