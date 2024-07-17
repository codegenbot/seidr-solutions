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
            result += ' ';
        } else {
            if (result.length() > 0) {
                result[0] = tolower(result[0]);
            }
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string in kebab-case: ";
    getline(cin, s);
    cout << camelCase(s) << endl;
    return 0;
}