Here is the solution:

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
            if (!result.empty()) {
                result += char(toupper(s[i])); // capitalize the first letter of each word
            } else {
                result += s[i]; // add the first character as it is
            }
        } else if (s[i] == ' ') {
            continue; // skip the spaces
        } else {
            if (!result.empty()) {
                result += char(tolower(s[i])); // convert to lowercase and add to the result
            } else {
                result = char(tolower(s[i])) + result; // add the first character as it is
            }
        }
    }
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << camelCase(s) << endl;
    }
    return 0;
}