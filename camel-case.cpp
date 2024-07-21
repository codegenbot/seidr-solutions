Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string s) {
    string result = "";
    int i = 0;
    
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            continue;
        }
        
        if (result != "") {
            result += toupper(s[i]);
        } else {
            result += tolower(s[i]);
        }
        i++;
    }
    
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a kebab-case string or 'quit' to stop: ";
        cin >> s;
        
        if (s == "quit")
            break;
        
        cout << "CamelCase: " << toCamelCase(s) << endl;
    }
    
    return 0;
}