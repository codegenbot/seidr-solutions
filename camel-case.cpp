#include <initializer_list>

#ifndef __cplusplus
#define _MSC_VER 1900
#endif

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string str) {
    string result = "";
    for (char c : str) {
        if (c == '-') {
            result += toupper(str.find(c) + 1);
            str.erase(str.find(c), 1);
        } else if (c == ' ') {
            result += " ";
        } else {
            result += tolower(c);
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