#include <iostream>
#include <string>

using namespace std;

bool cycpattern_check(string a, string b) {
    int lenB = b.length();
    string rotation = b + b;
    for (int i = 0; i < lenB; ++i) {
        if (a.find(rotation.substr(i, lenB)) != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << (cycpattern_check(a, b) ? "true" : "false") << endl;
    return 0;
}