#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] == ' ') {
                i++;
            }
            result += toupper(str[i]);
        } else if (str[i] == ' ') {
            continue;
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