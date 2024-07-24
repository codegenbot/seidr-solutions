Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    int spaceCount = 0;
    for (char c : s) {
        if (c == ' ') {
            spaceCount++;
        } else {
            if (spaceCount > 0) {
                result += char(toupper(c));
                spaceCount = 0;
            } else {
                result += tolower(c);
            }
        }
    }
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << camelCase(s) << endl;
    }
    return 0;
}