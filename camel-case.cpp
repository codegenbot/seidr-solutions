Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] == '-') i++;
            result += toupper(s[i]);
        } else if (!result.empty()) {
            result += toupper(s[i]);
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "input: ";
        cin >> input;
        cout << "output: " << camelCase(input) << endl;
    }
    return 0;
}