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

        if (c == ' ') {
            upperCaseNext = true;
            continue;
        }

        if (!upperCaseNext) {
            result += tolower(c);
        } else {
            result += toupper(c);
            upperCaseNext = false;
        }
    }

    cout << result << endl;
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    camelCase(str);
    return 0;
}