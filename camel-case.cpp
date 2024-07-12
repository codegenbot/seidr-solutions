#include <initializer_list>

#include <vector>
#include <iostream>
#include <string>

#ifndef __cplusplus
#define _MSC_VER 1900
#endif

using namespace std;

string kebabToCamel(string str) {
    string result = "";
    for (char c : str) {
        if (c == '-') {
            result += toupper(str.substr(str.find(c) + 1, 1));
            str.erase(str.find(c), 1);
        } else if (c == ' ') {
            result += " ";
        } else {
            if (!result.empty()) {
                result[0] = tolower(c);
            }
            else {
                result += tolower(c);
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << kebabToCamel(str) << endl;
    }
    return 0;
}