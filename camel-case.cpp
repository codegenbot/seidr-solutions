#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool firstWord = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
            } else {
                firstWord = false;
            }
        } else if (c == ' ') {
            if (!firstWord) {
                result += char(toupper(c));
            } else {
                firstWord = false;
            }
        } else {
            if (!firstWord) {
                result += c;
            } else {
                result += tolower(c);
                firstWord = false;
            }
        }
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a string in kebab-case: ";
    cin >> s;
    cout << camelCase(s) << endl;
    return 0;
}