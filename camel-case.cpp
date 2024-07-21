#include <iostream>
#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (i > 0 && s[i - 1] != ' ')
                result += toupper(s[i + 1]);
            else
                result += s[i];
            i++;
        } else if (s[i] == ' ') {
            result += toupper(s[i + 1]);
            i++;
        } else {
            if (!result.length())
                result = tolower(s[i]);
            else
                result += s[i];
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }
    return 0;
}