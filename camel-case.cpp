Here is the completed code:

#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result.length() > 0) {
                result[0] = toupper(result[0]);
            }
            if (i < s.length()) {
                result += s.substr(i + 1, s.find(" ", i + 1) - i - 1).substr(0, 1);
                result += tolower(s.substr(i + 1, s.find(" ", i + 1) - i - 1).substr(1));
            }
        } else {
            if (s[i] != '-') {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "input: ";
    cin >> input;
    cout << "output: " << camelCase(input) << endl;
    return 0;
}