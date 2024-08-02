#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string s) {
    string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        if (s[pos] == '-') {
            pos++;
            while (pos < s.length() && s[pos] != ' ') {
                pos++;
            }
        } else if (s[pos] == ' ') {
            pos++;
            continue;
        }
        result += toupper(s[pos]);
        pos++;
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cin >> input;
        cout << toCamelCase(input) << endl;
    }
    return 0;
}