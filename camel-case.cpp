#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    int i;
    for (i = 0; i <= s.size(); i++) {
        if (s[i] == '-' || i == s.size()) {
            if (!result.empty())
                result[0] = toupper(result[0]);
            if (i < s.size() && s[i] != '-')
                result += s.substr(i);
            break;
        } else if (s[i] == ' ') {
            if (!result.empty())
                result[0] = toupper(result[0]);
            result += s.substr(0, i);
            i--;
        } else {
            if (result.size() == 0)
                result += s[i];
            else
                result += toupper(s[i]);
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}