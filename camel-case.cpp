#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool first = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if (!first) {
                result += tolower(s[i]);
            } else {
                first = false;
                result += toupper(s[i]);
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!first) {
                result += tolower(s[i]);
            } else {
                first = false;
                result += toupper(s[i]);
            }
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        cin >> s;
        cout << "The camelCase version is: " << camelCase(s) << endl;
    }
    return 0;