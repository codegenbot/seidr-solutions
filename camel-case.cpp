#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip '-'
            while (i < s.size() && s[i] == ' ') {
                i++; // skip spaces
            }
            if (result != "") {
                result += char(toupper(s[i])); // capitalize the first letter of each new word
            } else {
                result = char(toupper(s[i]));
            }
        } else if (s[i] == ' ') {
            continue; // skip spaces
        } else {
            if (result != "") {
                result += s[i]; // add lowercase letters to the result
            } else {
                result += char(tolower(s[i])); // add lowercase letters to the result
            }
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Camel case conversion: " << camelCase(input) << endl;
    return 0;
}