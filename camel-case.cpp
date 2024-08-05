#include <vector>
#include <iostream>
#include <string>

string camelCase(string s) {
    string result = "";
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize && c != ' ') {
            result += toupper(c);
            capitalize = false;
        } else if (!capitalize && c != ' ') {
            result += tolower(c);
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