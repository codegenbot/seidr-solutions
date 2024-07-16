#include <iostream>
#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] == ' ') {
                i++;
            }
            result += toupper(str[i]);
        } else if (str[i] != ' ') {
            result += tolower(str[i]);
        } else {
            result += ' ';
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