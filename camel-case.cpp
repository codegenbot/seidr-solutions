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
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "input: ";
        cin >> s;
        cout << "output: " << camelCase(s) << endl;
    }
    return 0;
}