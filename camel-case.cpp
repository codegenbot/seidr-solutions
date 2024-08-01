#include <string>
#include <iostream>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalize = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            capitalize = true;
        } else if (s[i] != ' ' || !capitalize) {
            result += (capitalize ? toupper(s[i]) : tolower(s[i]));
            capitalize = false;
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