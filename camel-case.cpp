#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool firstWord = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if (!firstWord) {
                result += tolower(s[i]);
            } else {
                firstWord = false;
                result += toupper(s[i]);
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result += tolower(s[i]);
            } else {
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