#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    int convertNext = false;
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            convertNext = true;
        }
        if (!convertNext) {
            continue;
        } else {
            if (s[i] != ' ') {
                if (result.empty()) {
                    result += toupper(s[i]);
                } else {
                    result += tolower(s[i]);
                }
            } else {
                convertNext = false;
                result += ' ';
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
}