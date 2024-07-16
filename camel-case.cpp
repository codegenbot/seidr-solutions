Here is your completed code:

```c++
#include <bits/stdc++.h>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == '-') i++;
            if (i < s.length()) {
                result += toupper(s[i]);
                i++;
            }
        } else if (s[i] != ' ') {
            if (!result.empty()) result[0] = tolower(result[0]);
            result += s[i];
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "input: ";
        cin >> str;
        cout << "output: " << camelCase(str) << endl;
    }
    return 0;
}