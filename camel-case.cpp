```cpp
#include <string>
#include <iostream>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNextLetter = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            capitalizeNextLetter = true;
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
        } else if (capitalizeNextLetter) {
            result += toupper(s[i]);
            capitalizeNextLetter = false;
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << camelCase(s) << endl;
    }
    return 0;
}