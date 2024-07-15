#include <vector>
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
                result += toupper(s[i]);
                i++;
            }
            result += " ";
        } else if (s[i] == ' ') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            result += tolower(s[i-1]);
        } else {
            result += tolower(s[i]);
            i++;
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << camelCase(input) << endl;
    return 0;
}