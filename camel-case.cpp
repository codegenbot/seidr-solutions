#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + 1);
            result += word;
            break;
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += std::tolower(s[i]) + s.substr(i + 1).substr(0, 1);
            result += toupper(s.substr(i + 1).substr(1)[0]) + s.substr(i + 1).substr(1);
            break;
        } else {
            if (result.empty()) {
                result += s[i];
            } else {
                result += std::toupper(s[i]);
            }
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