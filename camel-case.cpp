#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    bool upperCaseNext = false;

    for (char c : s) {
        if (c == '-') {
            result += ' ';
            continue;
        }

        if (!upperCaseNext) {
            result += tolower(c);
        } else {
            result += toupper(c);
            upperCaseNext = false;
        }
        
        if (c != ' ') {
            upperCaseNext = true;
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << camelCase(str) << endl;
    return 0;
}