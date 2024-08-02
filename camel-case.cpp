#include <string>
#include <iostream> 
using namespace std;

string camelCase(string s) {
    string result = "";
    bool firstWord = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            result += toupper(s[i]); 
            firstWord = false;
        } else if (!firstWord) {
            result += tolower(s[i]); 
        } else {
            result += tolower(s[i]);
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