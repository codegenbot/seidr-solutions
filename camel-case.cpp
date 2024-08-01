#include <string>
#include <iostream>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool upperCase = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            upperCase = true;
        } else if (s[i] != ' ') {
            result += upperCase ? tolower(toupper(s[i])) : tolower(s[i]);
            upperCase = false;
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