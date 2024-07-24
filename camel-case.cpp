#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string kebabCase(string s) {
    string result = "";
    bool convert = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += '-';
            convert = true;
        } else if (convert) {
            if(i > 0) 
                result += ' ';
            result += tolower(s[i]);
            convert = false;
        } else {
            result += toupper(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    cin >> input;
    cout << "The camelCase version is: " << kebabCase(input) << endl;
    return 0;
}