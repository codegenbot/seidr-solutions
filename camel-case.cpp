#include <string>
#include <iostream> 
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            if (!result.empty()) {
                result += toupper(s[i]); 
            } else {
                result += tolower(s[i]);
            }
        } else if (s[i] != ' ') {
            if (i > 0 && s[i-1] == '-') { 
                result += tolower(s[i]); 
            } else {
                result += toupper(s[i]);
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