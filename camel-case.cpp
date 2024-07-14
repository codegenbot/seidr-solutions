#include <iostream>
#include <string>
using namespace std;

string camelCase(string str) {
    string result = "";
    bool capital = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            capital = true;
            continue;
        }
        if (capital) {
            result += toupper(str[i]);
            capital = false;
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a kebab-case string: ";
    getline(cin, str);
    cout << "CamelCase: " << camelCase(str) << endl;
    return 0;
}