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
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] == ' ') {
                    break;
                }
                result += tolower(s[j]);
            }
            i = j - 1;
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