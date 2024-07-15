#include <iostream>
#include <string>
using namespace std;

string toCamelCase(string s) {
    string result = "";
    int i = 0;
    
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == '-') i++;
            continue;
        }
        
        if (s[i] != ' ') {
            result += toupper(s[i]);
            i++;
        } else {
            result += " ";
            i++;
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Input: ";
    getline(cin, input);
    cout << "Output: " << toCamelCase(input) << endl;
    return 0;
}