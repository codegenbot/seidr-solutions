#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    string result = "";
    int i = 0;
    
    while(i < str.length()) {
        if(str[i] == '-') {
            i++;
            while(i < str.length() && str[i] != ' ') {
                i++;
            }
            result += toupper(str[i]);
        } else {
            if(result != "") {
                result += toupper(str[i]);
            } else {
                result += tolower(str[i]);
            }
        }
    }
    
    return result;
}

int main() {
    string inputStr;
    cout << "Enter the kebab-case string: ";
    getline(cin, inputStr);
    cout << "CamelCase: " << camelCase(inputStr) << endl;
    return 0;
}