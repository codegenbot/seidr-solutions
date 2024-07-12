```
#include <iostream>
#include <string>
using namespace std;

string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ' && text[i + 1] == ' ') {
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    cout << "Fixed string: " << fix_spaces(text) << endl;
    return 0;