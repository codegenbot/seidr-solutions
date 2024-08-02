Here is the solution:

#include <iostream>
using namespace std;

string camelCase(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            result += toupper(str[i + 1]);
            i++;
        } else if (result != "" && !isSpace(str[i])) {
            result += tolower(str[i]);
        }
    }
    return result;
}

bool isSpace(char ch) {
    return ch == ' ';
}

int main() {
    string str;
    while (cin >> str) {
        cout << camelCase(str) << endl;
    }
    return 0;
}