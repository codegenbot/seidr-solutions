#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(string s) {
    string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            continue;
        }
        if (result != "") {
            result[0] = toupper(result[0]);
        }
        for (; i < s.length() && s[i] != '-'; i++) {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    getline(cin, input);
    cout << "The output is: " << kebabToCamel(input) << endl;
    return 0;
}