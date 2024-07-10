#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            result += toupper(s[i]);
        } else if (s[i] != ' ') {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "CamelCase: " << camelCase(input) << endl;
    return 0;
}