#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool isFirst = true;
    for (char c : s) {
        if (c == '-') {
            while (s[s.find(c) + 1] == ' ') {
                s.erase(s.find(c), 1);
            }
            if (!isFirst) {
                result += tolower(c + 1);
            } else {
                isFirst = false;
            }
        } else if (c != ' ') {
            if (!isFirst) {
                result += tolower(c);
            } else {
                result += toupper(c);
                isFirst = false;
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