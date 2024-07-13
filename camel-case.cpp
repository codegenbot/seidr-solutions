```cpp
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
            if (i < s.size()) {
                string word = s.substr(i + 1);
                if (result.empty()) {
                    result += word;
                } else {
                    result += toupper(word[0]) + word.substr(1);
                }
            }
            break;
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string left = s.substr(0, i);
            string right = s.substr(i + 1);
            result += toupper(left[0]) + left.substr(1) + right;
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
        if (str == "quit") break;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}