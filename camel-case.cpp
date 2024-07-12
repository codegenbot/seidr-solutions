```cpp
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
    bool capitalizeNextLetter = true;
    for (char c : str) {
        if (c == '-') {
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(c);
            capitalizeNextLetter = false;
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