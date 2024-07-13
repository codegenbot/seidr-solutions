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
            string word = s.substr(i + 1);
            if (!word.empty()) {
                result += word;
            }
            break;
        } else if (s[i] == ' ') {
            if (i > 0) {
                if (result.size() > 0) {
                    result[0] = toupper(result[0]);
                }
            }
            string word = s.substr(0, i);
            result += word;
            word = s.substr(i + 1);
            if (!word.empty()) {
                result += capitalize(word);
            }
            break;
        } else {
            result += s[i];
        }
    }
    return result;
}

string capitalize(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (i > 0) {
            result += tolower(s[i]);
        } else {
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
        if (str == "quit") break;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}