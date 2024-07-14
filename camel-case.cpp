#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(const string& str) {
    string result = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            if (i > 0 && str[i - 1] != ' ') {
                result += toupper(str[i + 1]);
                i++;
            } else {
                result += str[i];
            }
        } else {
            if (result.empty()) {
                result = tolower(str[i]);
            } else {
                result += str[i];
            }
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cout << "Enter a kebab-case string or 'stop' to quit: ";
        cin >> input;
        if (input == "stop") break;
        cout << "CamelCase: " << kebabToCamel(input) << endl;
    }
    return 0;
}