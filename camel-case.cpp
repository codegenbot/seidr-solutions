````
#include <string>
#include <iostream>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool first = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            result += toupper(s[i]); // capitalize the first letter of each word
            first = false;
        } else if (!first && s[i] != ' ') {
            result += tolower(s[i]); // convert all letters to lowercase after the first word
        } else {
            if (!first) result += ''; // add an empty string for the first capital letter
            result += toupper(s[i]); // capitalize the first letter of each word
            first = false;
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