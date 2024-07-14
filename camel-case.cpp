Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool firstWord = true;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (!firstWord) {
                result += char(toupper(s[i + 1]));
                i++;
            } else {
                firstWord = false;
            }
        } else if (s[i] == ' ') {
            if (!firstWord) {
                result += char(toupper(s[i + 1]));
                i++;
            } else {
                firstWord = false;
            }
        } else {
            if (!firstWord) {
                result += tolower(s[i]);
            } else {
                result += tolower(s[i]);
                firstWord = false;
            }
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}