#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == '-' || i == s.size()) {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + (s[i] == '-'));
            result += word;
        } else if (i > 0 && s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i);
            string word = s.substr(i + 1);
            result += word;
        } else {
            if (result.size() == 0)
                result += tolower(s[i]);
            else
                result += toupper(s[i]);
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}