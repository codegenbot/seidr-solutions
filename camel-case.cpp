#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string s) {
    string result = "";
    int i = 0;
    
    while (i < s.size()) {
        if (s[i] != '-') {
            if (!result.empty() || i == 0)
                result += toupper(s[i]);
            else
                result += tolower(s[i]);
        } else if (i + 1 < s.size()) {
            i++;
            result += ' ';
        }
        i++;
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter the string in kebab-case: ";
    cin >> input;
    cout << "The string in camelCase is: " << kebabToCamel(input) << endl;
    return 0;
}