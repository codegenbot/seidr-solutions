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
            int pos = str.find(c);
            string temp = str.substr(pos + 1);
            str.erase(pos, temp.length());
            result += toupper(temp[0]);
            result += tolower(temp.substr(1));
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