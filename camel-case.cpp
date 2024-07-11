#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.size() && s[i] == '-') i++;
            if (i < s.size()) {
                result += toupper(s[i]);
                i++;
            }
        } else if (s[i] != ' ') {
            if (!result.empty()) result += tolower(s[i]);
            else result += toupper(s[i]);
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence in kebab-case: ";
    cin >> s;
    cout << "CamelCase: " << camelCase(s) << endl;
    return 0;
}