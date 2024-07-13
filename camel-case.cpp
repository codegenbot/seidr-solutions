#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            if (result.length() > 0) {
                result += "";
            }
        } else if (!result.empty()) {
            result += tolower(s[i]);
        } else {
            result += toupper(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << camelCase(s) << endl;
    return 0;
}