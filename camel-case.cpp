#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == '-' || i == s.size()) {
            if (!result.empty())
                result[0] = toupper(result[0]);
            if (i < s.size() && s[i] != '-') {
                string word = s.substr(i + 1);
                if (!word.empty())
                    result += word;
            } else {
                if (!s[i] == '-')
                    result += s[i];
            }
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            if (!s[i + 1] == ' ')
                result += &s[i + 1];
        } else {
            if (result.size() == 0)
                result += s[i];
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