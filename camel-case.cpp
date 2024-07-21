#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == '-') i++;
            if (i < s.length()) {
                result += toupper(s[i]);
                i++;
            }
        } else if (result != "") {
            result += tolower(s[i]);
        } else {
            result += toupper(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "input: ";
        cin >> input;
        cout << "output: " << kebabToCamel(input) << endl;
    }
    return 0;
}