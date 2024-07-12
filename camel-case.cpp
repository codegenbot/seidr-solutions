#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            if (i < s.size()) {
                result += tolower(s.substr(i + 1));
            } else {
                break;
            }
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += toupper(s[i+1]) + s.substr(i + 2);
            i = s.size();
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        cin >> str;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}