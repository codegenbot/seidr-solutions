#include <string>

using namespace std;

string toCamelCase(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            continue;
        }
        if (result != "") {
            result += toupper(s[i]);
        } else {
            result += tolower(s[i]);
        }
        i++;
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string in kebab-case: ";
    cin >> s;
    cout << "The camelCase conversion is: " << toCamelCase(s) << endl;
    return 0;
}