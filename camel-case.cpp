Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (i > 0 && result.back() != ' ') {
                result += toupper(str[i + 1]);
                i++;
            }
        } else if (str[i] == ' ') {
            result += toupper(str[i + 1]);
            i++;
        } else {
            if (result.length() == 0 || result.back() == ' ')
                result += tolower(str[i]);
            else
                result += str[i];
        }
    }
    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << kebabToCamelCase(str) << endl;
    }
    return 0;
}