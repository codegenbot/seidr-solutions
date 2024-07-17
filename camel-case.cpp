#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the next character
            result += toupper(s[i]);
        } else if (result.empty() || s[i] != ' ') {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    while (cin >> input) {
        cout << kebabToCamel(input) << endl;
    }
    return 0;
}