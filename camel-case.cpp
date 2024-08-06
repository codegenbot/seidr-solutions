#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    bool firstWord = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += toupper(s[i + 1]);
            i++;
        } else if (firstWord) {
            result += tolower(s[i]);
            firstWord = false;
        } else {
            result += toupper(s[i]);
        }
    }
    
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << kebabToCamel(s) << endl;
    }
    return 0;
}