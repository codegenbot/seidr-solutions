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
            result += toupper(s[i]); // convert to uppercase
        } else if (s[i] != ' ') {
            if (!result.empty()) {
                result += towupper(s[i]); // convert to uppercase
            } else {
                result += tolower(s[i]); // convert to lowercase
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}