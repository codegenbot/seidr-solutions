#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && s[i] == ' ') {
                i++; // skip the spaces
            }
            result += toupper(s[i]);
        } else if (s[i] != ' ') {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += s[i];
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