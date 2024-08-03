#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    int capitalizeNext = 1;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            capitalizeNext = 1;
        } else if (s[i] == ' ') {
            capitalizeNext = 1;
        } else {
            if (!capitalizeNext) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
                capitalizeNext = 0;
            }
        }
    }
    
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        cin >> s;
        cout << "The camelCase version is: " << camelCase(s) << endl;
    }
    return 0;
}