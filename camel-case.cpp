#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            result += toupper(s[i + 1]);
            i++; // Skip the '-' and the following character
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.size()) {
                result += s[i];
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        if (str == "quit") break;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}