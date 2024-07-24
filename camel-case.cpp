```cpp
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool convert = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            convert = true;
        } else if (convert) {
            if(i > 0) // Add space before first letter of each word
                result += ' ';
            result += toupper(s[i]);
            convert = false;
        } else {
            result += tolower(s[i]);
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