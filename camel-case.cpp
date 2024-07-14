#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool nextUpper = false;
    for (char c : s) {
        if (c == '-') {
            nextUpper = true;
        } else if (c == ' ') {
            continue;
        } else {
            if (!nextUpper) {
                result += tolower(c);
            } else {
                result += toupper(c);
                nextUpper = false;
            }
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a kebab-case string (or 'q' to quit): ";
        cin >> s;
        if (s == "q") break;
        cout << camelCase(s) << endl;
    }
    return 0;
}