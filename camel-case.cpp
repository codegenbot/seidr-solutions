```c++
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    int i = 0; // declare and initialize i
    if (s[0] == '-') i++;
    string result = "";
    for (int j = 0; j < s.length(); j++) {
        if (s[j] == '-') {
            j++; // increment j to skip the '-' character
            while (j < s.length() && s[j] != ' ') {
                result += toupper(s[j]);
                j++;
            }
            result += " ";
        } else {
            result += tolower(s[j]);
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