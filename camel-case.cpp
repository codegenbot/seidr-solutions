```
#include <iostream>
#include <string>
using namespace std;

void toCamelCase(string s) {
    string result = "";
    for (char c : s) {
        if (c == '-') {
            if (!result.empty()) {
                result[0] -= 32;
            }
            result += c + " ";
        } else if (c == ' ') {
            if (!result.empty() && result.back() != '-') {
                result[0] -= 32;
            }
            result = "";
        } else {
            if (result.empty()) {
                result += c;
            } else {
                result += toupper(c);
            }
        }
    }
    for(int i=0; i<result.size(); i++) {
        if(result[i] == ' ') {
            result.erase(i, 1);
            i--;
        }
    }
    cout << result;
}

int main() {
    string s;
    cin >> s;
    toCamelCase(s);
    return 0;
}