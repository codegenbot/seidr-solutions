#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the hyphen
            while (i < s.size() && isspace(s[i])) i++; // skip spaces
            result += toupper(s[i]); // capitalize the first letter of each word
        } else if (!isspace(s[i]) || i == 0) { // add letters to the current word
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}