Here is the solution:

#include <iostream>
#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') i++;
            if (result.length() > 0) result += char(toupper(s[i]));
            else result += tolower(s[i]);
        } else if (s[i] == ' ') {
            if (result.length() > 0) result += char(toupper(s[i+1]));
            else result += s[i];
        } else {
            if (i == 0 || s[i-1] == '-') result = tolower(s[i]);
            else if (isupper(s[i])) result += char(tolower(s[i]));
            else result += s[i];
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        cin >> s;
        cout << "camelCase: " << camelCase(s) << endl;
    }
    return 0;
}