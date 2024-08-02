#include <string>
#include <iostream> 
using namespace std;

string camelCase(string s) {
    string result = "";
    int upperNext = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            upperNext = true;
        } else if (s[i] != ' ') {
            result += (upperNext ? toupper(s[i]) : tolower(s[i]));
            upperNext = false;
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