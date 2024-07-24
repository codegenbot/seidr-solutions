```c++
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool firstWord = true;
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            while (i < s.length() && s[i] != ' ') {
                if (!firstWord) {
                    result += toupper(s[i]);
                } else {
                    firstWord = false;
                    char c = tolower(s[i]);
                    result += c;
                }
                i++;
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