Here is the solution:

#include <iostream>
#include <string>

using namespace std;

string camelCase(string str) {
    string result = "";
    for (char c : str) {
        if (c == '-') {
            c++;
            while (c != ' ' && c != '\0') {
                result += topper(c);
                c++;
            }
            if (result.back() != ' ') {
                result.push_back(' ');
            }
        } else if (!isblank(c)) {
            if (result.empty()) {
                result = tolower(c);
            } else {
                if (c >= 'A' && c <= 'Z') {
                    result += string(1, tolower(c));
                } else {
                    result += string(1, c);
                }
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string s;
        getline(cin, s);
        cout << camelCase(s) << endl;
    }
    return 0;
}