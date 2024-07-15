#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool upperCaseNext = true;
    
    for (char c : s) {
        if (c == '-') {
            upperCaseNext = true;
        } else if (c == ' ') {
            continue;
        } else {
            if (upperCaseNext) {
                result += toupper(c);
                upperCaseNext = false;
            } else {
                result += tolower(c);
            }
        }
    }
    
    return result;
}

int main() {
    int numCases;
    cin >> numCases;

    for (int i = 0; i < numCases; ++i) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }

    return 0;
}