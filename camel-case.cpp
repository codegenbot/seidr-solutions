Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string res = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (res.size()) {
                res[0] = toupper(res[0]);
            }
            int j = i + 1;
            while (j < s.size() && s[j] != '-') {
                res += tolower(s[j++]);
            }
            res += " ";
        } else {
            res += s[i];
        }
    }
    return res.substr(0, res.size() - 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << camelCase(input) << endl;
    return 0;
}