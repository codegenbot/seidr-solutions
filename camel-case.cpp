#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(const string& s) {
    string result = "";
    for (const auto& c : s) {
        if (c == '-') {
            // Move to next character and capitalize it.
            c = s[++i];
            if (!result.empty()) {
                result += char(toupper(c));
            }
        } else if (c == ' ') {
            i = s.find('-') + 1;
            continue;
        } else {
            if (result.empty()) {
                result += tolower(c);
            } else {
                result += toupper(c);
            }
        }
    }
    return result;
}

int main() {
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}