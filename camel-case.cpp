Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "";
    bool firstWord = true;
    for (char c : s) {
        if (c == '-') {
            res += char(toupper(s[s.find(c) + 1]));
            s.erase(s.find(c), 1);
        } else if (firstWord) {
            res += tolower(c);
            firstWord = false;
        } else {
            res += toupper(c);
        }
    }
    cout << res << endl;
    return 0;
}