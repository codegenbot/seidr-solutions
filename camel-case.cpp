#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool firstWord = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            // Move to the next character.
            i++;
            if (!firstWord) {
                result += char(toupper(s[i]));
            } else {
                firstWord = false;
            }
        } else if (s[i] != ' ') {
            if (!firstWord) {
                result += s[i];
            } else {
                firstWord = false;
                result += toupper(s[i]);
            }
        }
    }
    
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a string in kebab-case or 'q' to quit: ";
        cin >> input;
        if (input == "q") break;
        cout << camelCase(input) << endl;
    }
    return 0;
}