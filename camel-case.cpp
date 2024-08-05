```c++
#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if(i+1 < str.length()) {
                result += toupper(str[i+1]);
                i++;
                while (i < str.length() && str[i] == ' ') {
                    i++;
                }
            } else {
                continue;
            }
        } else if (str[i] == ' ') {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += ' ';
        } else {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += str[i];
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string in kebab-case: ";
    cin >> str;
    cout << "The camelCase equivalent is: " << kebabToCamel(str) << endl;
    return 0;
}