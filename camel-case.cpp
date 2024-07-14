#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result.length() > 0) {
                result[0] = toupper(result[0]);
            }
            if (i < s.length()) {
                string word = "";
                for (; i < s.length(); i++) {
                    if (s[i] != '-') {
                        word += s[i];
                    } else {
                        i++;
                        break;
                    }
                }
                result += word;
            }
        } else {
            if (i == 0) {
                result = s.substr(0, 1);
            } else {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << camelCase(s) << endl;
    return 0;
}