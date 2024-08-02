Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if (result != "") {
                result += std::toupper(s[i]);
            } else {
                result = std::toupper(s[i]);
            }
        } else {
            if (s[i] == ' ') {
                while (i < s.length() && s[i] == ' ') {
                    i++;
                }
            } else {
                if (result != "") {
                    result += std::tolower(s[i]);
                } else {
                    result = std::tolower(s[i]);
                }
            }
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a string in kebab-case (or 'exit' to stop): ";
        cin >> input;
        if (input == "exit") break;
        cout << camelCase(input) << endl;
    }
    return 0;
}