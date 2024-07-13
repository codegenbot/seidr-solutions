```cpp
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size()) {
                result += toupper(s[i + 1]);
            }
            string word = s.substr(i + 1);
            if (i > 0) {
                result += s[i];
            }
            result += word;
            break;
        } else if (s[i] == ' ') {
            if (result.size()) {
                result += toupper(s[i + 1]);
            } else {
                result += s[i + 1];
            }
            string left = s.substr(0, i + 1);
            string right = s.substr(i + 2);
            result += left;
            result += right;
            break;
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
        getline(cin, str);
        if (str == "quit") break;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}