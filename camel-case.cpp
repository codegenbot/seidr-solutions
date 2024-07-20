#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && s[i] == ' ') {
                i++; // skip the spaces
            }
            result += toupper(s[i]);
        } else if (!result.empty() && isalpha(s[i])) {
            result += tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    cin >> input;
    cout << "CamelCase: " << camelCase(input) << endl;
    return 0;
}