Here is the solution:

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
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (result.length() > 0) {
                result[0] = tolower(s[i]);
            } else {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << camelCase(input) << endl;
    return 0;
}