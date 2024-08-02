Here is the solution:

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
            result += " ";
        } else {
            result += tolower(s[i]);
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