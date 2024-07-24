#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool convert = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            convert = true;
        } else if (convert) {
            result += toupper(s[i]);
            convert = false;
        } else {
            result += (i == 0) ? tolower(s[i]) : (convert ? toupper(s[i]) : tolower(s[i]));
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