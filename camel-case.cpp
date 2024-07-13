#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += char(toupper(s[i + 1])) + substr(i + 2);
            i++;
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(0, i);
            result += word;
            s.erase(0, i + 1);
            i--;
        } else {
            if (result.empty() || s[i - 1] == '-') {
                result += s[i];
            } else {
                result += char(toupper(s[i]));
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