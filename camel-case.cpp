#include <iostream>
#include <string>
using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (i > 0 && s[i - 1] != ' ') {
                result += toupper(s[i + 1]);
                i++;
            } else {
                int j = i;
                while (j < s.length() && s[j] != '-' && s[j] != ' ')
                    j++;
                if (i > 0)
                    result += s.substr(i, j - i);
                i = j;
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (!result.empty())
                result += tolower(s[i]);
            else
                result += s[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    getline(cin, input);
    cout << "The camelCase equivalent is: " << camelCase(input) << endl;
    return 0;
}