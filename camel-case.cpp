#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '-') {
            i++;
            result += toupper(str[i]);
        } else if (str[i] == ' ') {
            result += " ";
            i++;
        } else {
            if (!result.size() || result.back() != ' ')
                result += tolower(str[i]);
            else
                result += str[i];
            i++;
        }
    }
    return result;
}

int main() {
    string input;
    while (cin >> input) {
        cout << kebabToCamel(input) << endl;
    }
    return 0;
}