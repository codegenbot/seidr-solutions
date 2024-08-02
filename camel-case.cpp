#include <string>
#include <iostream> 
using namespace std;

string camelCase(string s) {
    string result = "";
    int upper = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            if (upper) result += tolower(s[i]);
            else result += toupper(s[i]); 
            upper = 1;
        } else if (s[i] != ' ') {
            if (!upper) result += tolower(s[i]);
            else {
                result += toupper(s[i]);
                upper = 0;
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