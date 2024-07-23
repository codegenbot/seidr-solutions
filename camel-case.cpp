#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    int flag = 0;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '-') {
            flag = 1;
        } else {
            if(flag) {
                result += toupper(s[i]);
                flag = 0;
            } else {
                result += tolower(s[i]);
            }
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    cin >> input;
    cout << "Camel-case conversion: " << kebabToCamel(input) << endl;
    return 0;
}