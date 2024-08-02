#include <string>
#include <iostream> 
using namespace std;

string camelCase(string s) {
    string result = "";
    int capitalizeNext = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the "-"
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(s[i]); // capitalize the first letter of each word
            capitalizeNext = false;
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