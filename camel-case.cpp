#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            for (++i; i <= s.size() && s[i] != '-'; i++) {
                if (i == s.size()) break;
            }
            result += toupper(s[i]);
        } else if (s[i] == ' ') {
            result += toupper(s[i]);
            for (int k = i + 1; k < s.size(); k++) {
                if (s[k] != ' ')
                    result += tolower(s[k]);
                else
                    break;
            }
        } else {
            if (i > 0) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
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