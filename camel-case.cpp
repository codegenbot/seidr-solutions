#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (i > 0 && s[i - 1] != ' ') {
                result += toupper(s[i + 1]);
                i++;
            } else {
                result += s[i];
            }
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result += toupper(s[i + 1]);
                i++;
            } else {
                result += s[i];
            }
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "input: ";
        cin >> s;
        cout << "output: " << camelCase(s) << endl;
    }
    return 0;
}