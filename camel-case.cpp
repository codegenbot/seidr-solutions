#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (capitalizeNext) {
                result += toupper(s.substr(i + 1, 1));
                capitalizeNext = false;
            } else {
                result += s.substr(i + 1);
            }
        } else if (s[i] == ' ') {
            capitalizeNext = true;
            if (i > 0) {
                result += s[i];
            }
        } else {
            if (capitalizeNext) {
                result += toupper(s[i]);
                capitalizeNext = false;
            } else {
                result += tolower(s[i]);
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
    }
    return 0;
}