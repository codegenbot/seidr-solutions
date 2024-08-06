#include <string>
using namespace std;

string kebabToCamel(string s) {
    string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-') {
            if (result != "") {
                result[0] = toupper(result[0]);
            }
            if (i < s.length()) {
                result += tolower(s.substr(i));
            }
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a string in kebab-case (or 'quit' to stop): ";
        cin >> input;
        if (input == "quit") break;
        cout << kebabToCamel(input) << endl;
    }
    return 0;
}