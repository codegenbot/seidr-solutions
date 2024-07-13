#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++;
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(i, 1);
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (result.empty()) {
                result += s[i];
            } else {
                result += toupper(s[i]);
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