#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    int i = 0; // declare and initialize i
    if (s[0] == '-') i++;
    string result = "";
    for (int j = 0; j < s.length(); j++) {
        if (j == i && s[j] != ' ') {
            result += toupper(s[j]);
        } else if (s[j] == '-') {
            i = j + 1;
            while (i < s.length() && s[i] != ' ') {
                result += tolower(s[i]);
                i++;
            }
            if (i < s.length()) {
                result += toupper(s[i]);
                i++;
            }
        } else {
            result += tolower(s[j]);
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