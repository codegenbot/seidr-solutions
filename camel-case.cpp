#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; 
            while (i < s.size() && s[i] == ' ') { i++; } 
            if (result != "") result += char(toupper(s[i])); 
            else result = toupper(s[i]); 
        } else if (s[i] != ' ') {
            if (i > 0) result += s[i]; 
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