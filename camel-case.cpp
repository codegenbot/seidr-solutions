#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (result != "") {
                result += char(toupper(s[i + 1]));
                i++;
            }
        } else if (s[i] == ' ') {
            if (result != "") {
                result += char(toupper(s[i + 1]));
                i++;
            }
        } else {
            if (i > 0) {
                result += s[i];
            } else {
                result = s[i];
            }
        }
    }
    return result;
}

int main() {
    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        string input;
        cin >> input;
        cout << kebabToCamel(input) << endl;
    }

    return 0;
}