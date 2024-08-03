#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNextLetter = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            capitalizeNextLetter = true;
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (capitalizeNextLetter) {
                result += toupper(s[i]);
                capitalizeNextLetter = false;
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