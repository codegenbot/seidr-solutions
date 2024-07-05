#include <iostream>
#include <string>

using namespace std;

bool cycpattern_check(string a, string b) {
    int len = b.length();
    string rotation = b + b;
    for (int i = 0; i < len; ++i) {
        if (a.find(rotation.substr(i, len)) != string::npos) {
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