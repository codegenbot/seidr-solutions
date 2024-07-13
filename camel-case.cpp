#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            result += " ";
        } else if (s[i] != '-') {
            if (result.empty()) {
                result = tolower(s[i]) + "";
            } else {
                while (i > 0 && s[i-1] == ' ') {
                    i--;
                }
                if (s[i-1] == '-') {
                    i--;
                }
                result += toupper(s[i]);
                i++;
            }
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