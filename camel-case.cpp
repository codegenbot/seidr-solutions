#include <vector>
#include <iostream>
#include <string>

#define c++11

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