Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string str) {
    string result = "";
    int count = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            count++;
            continue;
        }
        
        if (count > 0) {
            result[0] = toupper(str[i]);
            result += str.substr(i + 1);
            break;
        }
        
        if (str[i] != ' ') {
            if (result.length() == 0)
                result += tolower(str[i]);
            else
                result += str[i];
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter the kebab-case string: ";
    cin >> input;
    cout << "The camelCase string is: " << kebabToCamel(input) << endl;
    return 0;
}