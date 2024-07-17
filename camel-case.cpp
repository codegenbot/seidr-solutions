#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.size()) {
        if (s[i] != '-') {
            if (result.empty()) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        } else {
            if (!result.empty()) {
                result += ' ';
            }
            i++;
            while (i < s.size() && s[i] == '-') {
                i++;
            }
            if (s[i] != ' ') {
                if (result.size() > 0) {
                    result[0] = tolower(result[0]);
                } else {
                    result += " ";
                }
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}