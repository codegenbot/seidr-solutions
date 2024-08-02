#include <string>
using namespace std;

string kebabToCamel(const string& s) {
    string result;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '-') {
            ++i; // skip '-'
            while (i < s.size() && s[i] == ' ') {
                ++i; // skip spaces
            }
            result += toupper(s[i]);
            i++; // skip first char of the word
        } else {
            if (!result.empty()) {
                result += tolower(s[i]);
            } else {
                result += toupper(s[i]);
            }
            i++;
        }
    }
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << kebabToCamel(s) << endl;
    }
    return 0;
}