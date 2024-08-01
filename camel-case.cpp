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
        } else if (capitalize) {
            result += toupper(s[i]); 
            capitalize = false;
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