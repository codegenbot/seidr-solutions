#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            if (i < s.length()) {
                result += toupper(s[i]);
            }
        } else {
            if (result != "") {
                result += toupper(s[i]); // capitalize the first letter of each word
            } else {
                result += tolower(s[i]); // lowercase the first letter
            }
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a kebab-case string (or 'quit' to exit): ";
        getline(cin, s);
        if (s == "quit") break;
        cout << "camelCase: " << kebabToCamel(s) << endl;
    }
    return 0;
}