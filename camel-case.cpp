#include <string>
#include <iostream> 
using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNextLetter = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(s[i]); // capitalize the first letter of each word
            capitalizeNextLetter = false; // set to false until next dash is found
        } else {
            result += tolower(s[i]); // convert all letters to lowercase
        }
    }
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << camelCase(s) << endl;
    }
    return 0;
}