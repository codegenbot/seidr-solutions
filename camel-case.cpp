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
    bool capitalizeNext = true;
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
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