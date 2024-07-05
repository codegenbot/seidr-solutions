#include <iostream>
#include <string>
using namespace std;

bool is_nested(const string& str) {
    int depth = 0;
    for (char ch : str) {
        if (ch == '[') {
            depth++;
        } else if (ch == ']') {
            depth--;
        }
        if (depth > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;
    if (is_nested(input)) {
        cout << "The string has nested brackets" << endl;
    } else {
        cout << "The string does not have nested brackets" << endl;
    }
    return 0;
}