#include <string>
#include <cctype>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool capitalizeNext = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if(capitalizeNext) {
                result += toupper(s[i]);
                capitalizeNext = false;
            } else {
                result += tolower(s[i]);
            }
        } else if (s[i] == ' ') {
            capitalizeNext = true;
        } else {
            if (!result.empty()) {
                result += tolower(s[i]);
            } else {
                if(capitalizeNext) {
                    result += toupper(s[i]);
                    capitalizeNext = false;
                } else {
                    result += tolower(s[i]);
                }
            }
        }
    }
    return result;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        cin >> s;
        cout << "The camelCase version is: " << camelCase(s) << endl;
    }
    return 0;
}