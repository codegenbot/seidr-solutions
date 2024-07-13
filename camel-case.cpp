#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool upperNext = true;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (upperNext) {
                result += toupper(s[i + 1]);
                upperNext = false;
            } else {
                result += s[i + 1];
            }
        } else if (s[i] == ' ') {
            if (!upperNext) {
                result += s[i];
            } else {
                result += toupper(s[i]);
                upperNext = false;
            }
        } else {
            if (!upperNext) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
                upperNext = false;
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        cout << "The camelCase is: " << camelCase(str) << endl;
        // Ask the user if they want to continue
        char response;
        cout << "Continue? (y/n): ";
        cin >> response;
        if (response == 'n') break; 
    }
    return 0;
}