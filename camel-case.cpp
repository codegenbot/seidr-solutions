#include <string>
#include <iostream>
using namespace std;

string camelCase(string s) {
    string result = "";
    int i;
    for (i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += toupper(s[++i]); // capitalize the first letter of each word
            while (i + 1 < s.length() && s[i + 1] == ' ') {
                i++; // skip the spaces
            }
        } else if (s[i] != ' ') {
            result += tolower(s[i]); // convert all letters to lowercase
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