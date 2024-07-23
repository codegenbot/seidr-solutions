Here is the modified code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool nextUpper = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                if (!nextUpper)
                    result += tolower(s[i]);
                else
                    result += toupper(s[i]);
                nextUpper = true;
                i++;
            }
            result += " ";
        } else if (!nextUpper) {
            result += tolower(s[i]);
            nextUpper = true;
        } else {
            result += toupper(s[i]);
            nextUpper = false;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    cin >> input;
    cout << "The camelCase version is: " << camelCase(input) << endl;
    return 0;
}