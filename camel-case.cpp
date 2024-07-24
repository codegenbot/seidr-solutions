#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    int i = 0;
    string result = "";
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                result += toupper(s[i]);
                i++;
            }
            if (result.size() > 0) result += '';
        } else {
            result += tolower(s[i]);
        }
        i++;
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    getline(cin, input);
    string output = camelCase(input);
    cout << "CamelCase output: " << output << endl;
    return 0;
}