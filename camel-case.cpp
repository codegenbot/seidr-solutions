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
            if (i > 0) {
                result += ' ';
            }
            while (i < s.length() && s[i] != ' ') {
                if (i == 0) {
                    result += tolower(s[i]);
                } else {
                    result += toupper(s[i]);
                }
                i++;
            }
        } else {
            if (i == 0) {
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