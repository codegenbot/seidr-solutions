```
#include <vector>
#include <iostream>
#include <string>

using namespace std;

# define c++11

size_t kebabToCamel(string str) {
    size_t result = "";
    for (char c : str) {
        if (c == '-') {
            result += toupper(str[str.find(c) + 1]);
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