#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip "-"
            while (i < s.size() && s[i] == ' ') { i++; } // skip spaces
            if (result != "") result += char(toupper(s[i])); // capitalize first letter of new word
            else result = toupper(s[i]); // capitalize first letter of the string
        } else if (s[i] != ' ') {
            if (i > 0) result += s[i]; // add lowercase letters to the result
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a sentence in kebab-case: ";
        cin >> input;
        cout << "In camelCase: " << camelCase(input) << endl;
    }
    return 0;