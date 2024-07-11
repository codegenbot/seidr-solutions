#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(const string& str) {
    string result;
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '-') {
            ++i; // skip the "-"
            while (i < str.length() && str[i] != ' ') {
                result += toupper(str[i]);
                ++i;
            }
            result.push_back(' ');
        } else {
            if (result.empty()) {
                result = tolower(str[i]);
            } else {
                result += tolower(str[i]);
            }
            ++i;
        }
    }
    return result.substr(1);
}

int main() {
    string str;
    cout << "Enter a kebab-case string: ";
    getline(cin, str);
    cout << "Camel-case string: " << kebabToCamel(str) << endl;
    return 0;
}