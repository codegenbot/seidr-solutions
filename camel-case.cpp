#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size()) {
                result += std::toupper(s[i + 1]);
            }
            else
                result += s.substr(i + 1);
            break;
        } else if (s[i] == ' ') {
            if (i > 0) {
                result[0] = std::tolower(s[i]);
            }
            result += s.substr(0, i);
            result += std::toupper(s[i]) + s.substr(i + 1).substr(1);
            break;
        } else {
            if (result.size() && !std::isupper(result.back())) {
                result += std::toupper(s[i]);
            }
            else
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
    }
    return 0;
}