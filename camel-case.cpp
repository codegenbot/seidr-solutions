Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    size_t pos = 0;
    
    while (pos < s.length()) {
        pos = s.find('-', pos);
        
        if (pos == string::npos) {
            result += toupper(s[pos]);
            break;
        }
        
        for (size_t i = pos; i < pos + 1; ++i) {
            if (s[i] != '-') {
                result += tolower(s[i]);
            } else {
                break;
            }
        }
        
        if (pos != string::npos) {
            result += toupper(s[pos + 1]);
        }
        
        pos++;
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a kebab-case string: ";
    cin >> s;
    cout << "CamelCase: " << kebabToCamel(s) << endl;
    return 0;
}