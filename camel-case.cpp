```cpp
#include <iostream>
#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            if (result.length() > 0) {
                result += toupper(s[i]);
            } else {
                result += s[i];
            }
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += tolower(s[i]);
        }
        i++;
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a kebab-case string: ";
    getline(cin, input);
    cout << "CamelCase version: " << camelCase(input) << endl;
    return 0;
}