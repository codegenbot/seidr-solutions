```cpp
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                if (i == 0) {
                    result += toupper(s[i]);
                } else {
                    result += toupper(s[i]);
                }
                i++;
            }
            if (i < s.length()) {
                result += " ";
            }
        } else {
            if (result.length() > 0) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    cin >> input;
    cout << "The camelCase version is: " << camelCase(input) << endl;
    return 0;
}