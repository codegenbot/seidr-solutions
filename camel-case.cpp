#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i <= s.size()) {
        if (i == s.size() || s[i] == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + 1);
            if (!word.empty()) {
                result += word;
            }
            break;
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += std::tolower(s[0]) + s.substr(i + 1).substr(1);
            i++;
            while (i < s.size() && s[i] != '-') i++;
        } else {
            if (!result.empty()) {
                result.push_back(toupper(s[i]));
            } else {
                result += std::tolower(s[i]);
            }
        }
        i++;
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