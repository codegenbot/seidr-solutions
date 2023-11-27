#include <iostream>
#include <string>
using namespace std;

bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    if (n != m) {
        return false;
    }

    string temp = a + a;

    for (int i = 0; i < n; i++) {
        string rotation = temp.substr(i, n);
        if (rotation == b) {
            return true;
        }
    }

    return false;
}

int main() {
    cout << cycpattern_check("abcd", "abd") << endl;
    cout << cycpattern_check("hello", "ell") << endl;
    cout << cycpattern_check("whassup", "psus") << endl;
    cout << cycpattern_check("abab", "baa") << endl;
    cout << cycpattern_check("efef", "eeff") << endl;
    cout << cycpattern_check("himenss", "simen") << endl;

    return 0;
}