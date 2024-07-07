#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool firstWord = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!firstWord)
                result += char(toupper(c));
            else
                firstWord = false;
        } else if (c == ' ') {
            if (!firstWord)
                result += char(toupper(c));
            else
                firstWord = false;
        } else {
            if (firstWord) {
                result += c;
                firstWord = false;
            } else {
                result += char(tolower(c));
            }
        }
    }
    
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a string in kebab-case or 'q' to quit: ";
        cin >> s;
        if (s == "q")
            break;
        cout << camelCase(s) << endl;
    }
    return 0;
}