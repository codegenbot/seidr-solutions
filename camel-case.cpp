#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (char c : s) {
        if (c == '-') {
            result += ' ';
            continue;
        }

        if (c == ' ') {
            result += toupper(result.back());
            continue;
        }

        if (!result.empty()) {
            result += tolower(c);
        } else {
            result += toupper(c);
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