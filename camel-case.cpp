Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string toCamelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '-') {
            i++;
            continue;
        }
        if (i > 0) {
            result += toupper(s[i]);
        } else {
            result += tolower(s[i]);
        }
        while (i < s.size() && s[i] != ' ') {
            i++;
            result += s[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "input: ";
    cin >> input;
    cout << "output: " << toCamelCase(input) << endl;
    return 0;
}