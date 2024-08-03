#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    int upperNext = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if (upperNext) {
                result += toupper(s[i]);
                upperNext = false;
            } else {
                result += tolower(s[i]);
            }
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result += tolower(s[i]);
            }
        } else {
            if (upperNext) {
                result += toupper(s[i]);
                upperNext = false;
            } else {
                result += tolower(s[i]);
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