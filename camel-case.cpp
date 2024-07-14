#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
        } else {
            if (!result.empty()) {
                result += " ";
            }
            while (i < s.length() && s[i] != '-') {
                result += tolower(s[i]);
                i++;
            }
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a kebab-case string: ";
        cin >> s;
        if (s == "nospaceordash") {
            break;
        }
        cout << camelCase(s) << endl;
    }
    return 0;
}