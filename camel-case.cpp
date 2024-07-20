Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            for (++i; i < s.length() && s[i] == '-'; i++);
            if (i < s.length()) {
                result += toupper(s[i]);
                i++;
            }
        } else if (!result.empty() && isalpha(s[i])) {
            result.push_back(tolower(s[i]));
        } else if (s[i] != '-') {
            if (result.empty()) {
                result += tolower(s[i]);
            } else {
                result.push_back(toupper(s[i]));
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