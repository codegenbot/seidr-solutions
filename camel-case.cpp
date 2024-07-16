#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string str) {
    string result = "";
    string temp = "";

    for (char c : str) {
        if (c == '-') {
            result += char(toupper(temp[0]));
            temp = "";
        } else if (c == ' ') {
            if (!temp.empty()) {
                result += char(toupper(temp[0]));
                temp = "";
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        result += char(toupper(temp[0]));
    }
    result += temp;

    return result;
}

int main() {
    string str;
    cout << "Enter a string in kebab-case: ";
    cin >> str;
    cout << "CamelCase representation: " << kebabToCamel(str) << endl;
    return 0;
}