```c++
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool nextWordIsUpper = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                if (!nextWordIsUpper) result += tolower(s[i]);
                else result += toupper(s[i]);
                nextWordIsUpper = !nextWordIsUpper;
                i++;
            }
        } else if (!nextWordIsUpper) result += tolower(s[i]);
        else {
            result += toupper(s[i]);
            nextWordIsUpper = false;
        }
    }
    // Check for the last word
    if (nextWordIsUpper) {
        while(i < s.length()) {
            result += tolower(s[i]);
            i++;
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