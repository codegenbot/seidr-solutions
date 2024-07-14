#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNextLetter = true;
    for (char c : s) {
        if (c == '-') {
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(c);
            capitalizeNextLetter = false;
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a kebab-case string (or 'q' to quit): ";
        cin >> s;
        if (s == "q") break;
        cout << camelCase(s) << endl;
    }
    return 0;
}