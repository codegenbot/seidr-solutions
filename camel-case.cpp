```c++
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                if (!result.size()) {
                    result += tolower(s[i]);
                } else {
                    result += toupper(s[i]);
                }
                i++;
            }
            result += " ";
        } else {
            if (!result.size()) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
            i++;
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