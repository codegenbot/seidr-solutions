#include <iostream>
#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            while (i < str.length() && str[i] == ' ') {
                i++;
            }
            result += toupper(str[i]);
        } else if (!result.empty()) { 
            if (str[i] >= 'a' && str[i] <= 'z') {
                result += static_cast<char>(str[i] - 32); 
            } else {
                result += str[i]; 
            }
        } else { 
            if (str[i] >= 'A' && str[i] <= 'Z') {
                result += str[i]; 
            } else if (str[i] >= 'a' && str[i] <= 'z') {
                result += static_cast<char>(str[i] - 32); 
            } else {
                result += str[i]; 
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    getline(cin, input);
    cout << "camelCase: " << camelCase(input) << endl;
    return 0;
}