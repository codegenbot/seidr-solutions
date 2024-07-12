#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = ""; // initialize here
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + 1);
            result += word;
            break;
        } else if (s[i] == ' ') {
            if (i > 0) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i);
            result += s.substr(i + 1).substr(0, 1);
            for (int j = 1; j < s.substr(i + 1).size(); j++) {
                result += tolower(s.substr(i + 1)[j]);
            }
            break;
        } else {
            if (!result.empty()) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
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