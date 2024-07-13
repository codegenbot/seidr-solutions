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
            string word = s.substr(i + 1);
            if (!word.empty())
                result += word;
            break;
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i) + s.substr(i + 1);
            break;
        } else {
            result += s[i];
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
        char response;
        cout << "Continue? (y/n): ";
        cin >> response;
        if (response == 'n')
            break;
    }
    return 0;
}