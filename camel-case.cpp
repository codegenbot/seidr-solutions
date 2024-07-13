```cpp
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size() > 0) {
                result[0] = toupper(result[0]);
            }
            if (i < s.size()) {
                result += s.substr(i + 1);
            }
            break;
        } else if (s[i] == ' ') {
            if (i > 0) {
                result += toupper(s[i-1]);
            }
            string word = s.substr(0, i);
            result += word;
            result += s.substr(i + 1);
            break;
        } else {
            if (result.size() == 0) {
                result += s[i];
            } else {
                result += tolower(s[i]);
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
        if (str == "quit") break;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}