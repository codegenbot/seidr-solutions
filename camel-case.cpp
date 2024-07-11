#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    bool firstWord = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (!firstWord) {
                result += char(toupper(s[i + 1]));
                i++;
            } else {
                firstWord = false;
            }
        } else if (s[i] == ' ') {
            result += char(toupper(s[i + 1]));
            i++;
            firstWord = true;
        } else {
            if (!firstWord) {
                result += s[i];
            } else {
                result += tolower(s[i]);
                firstWord = false;
            }
        }
    }
    
    return result;
}

int main() {
    string input;
    while (true) {
        cin >> input;
        cout << kebabToCamel(input) << endl;
    }
    return 0;
}