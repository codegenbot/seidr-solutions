#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool isFirstWord = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                if (!isFirstWord) {
                    result += toupper(s[i]);
                } else {
                    isFirstWord = false;
                    result += tolower(s[i]);
                }
                i++;
            }
        } else {
            if (!isFirstWord) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
                isFirstWord = false;
            }
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