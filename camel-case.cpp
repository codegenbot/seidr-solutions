Here is the solution:

#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string s) {
    string result = "";
    int start = 0;
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            string word = s.substr(start, i - start);
            if (!result.empty()) {
                result += char(toupper(word[0]));
                result += word.substr(1).substr(1);
            } else {
                result = word;
            }
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter the kebab-case string: ";
    getline(cin, s);
    cout << "The camelCase string is: " << kebabToCamel(s) << endl;
    return 0;
}