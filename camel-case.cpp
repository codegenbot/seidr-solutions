#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool upper = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            upper = true;
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result += upper ? toupper(s[i]) : tolower(s[i]);
            } else {
                result += tolower(s[i]);
            }
            upper = false;
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