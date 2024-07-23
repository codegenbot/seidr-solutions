#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += topper(s[i]);
                i++;
            }
        } else {
            if (result.length() > 0) {
                result[0] = topper(result[0]);
            }
            result += s[i];
        }
    }
    return result;
}

char topper(char c) {
    if ('a' <= c && c <= 'z') {
        return c - ('a' - 'A');
    } else {
        return c;
    }
}

int main() {
    string input;
    while (cin >> input) {
        cout << camelCase(input) << endl;
    }
    return 0;
}