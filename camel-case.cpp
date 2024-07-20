Here is the solution:

#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            result += toupper(s[i]);
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a kebab-case string: ";
    getline(cin, input);
    cout << "CamelCase equivalent: " << kebabToCamel(input) << endl;
    return 0;
}