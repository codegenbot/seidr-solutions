#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            result += toupper(s[i]);
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result += toupper(s[i]);
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
        cout << "Enter a kebab-case string (or 'q' to quit): ";
        cin >> s;
        if (s == "q") break;
        cout << camelCase(s) << endl;
    }
    return 0;
}