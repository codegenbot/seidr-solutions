#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a kebab-case string: ";
    cin >> input;

    cout << "CamelCase: " << kebabToCamel(input) << endl;

    return 0;
}