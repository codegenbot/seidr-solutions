#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

string kebabToCamelCase(const string &s) {
    stringstream ss(s);
    string token, result;
    bool firstWord = true;

    while (getline(ss, token, '-')) {
        if (firstWord) {
            result += token;
            firstWord = false;
        } else {
            token[0] = toupper(token[0]);
            result += token;
        }
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string group, output;

    while (getline(ss, group, ' ')) {
        if (!output.empty()) {
            output += " ";
        }
        output += kebabToCamelCase(group);
    }

    cout << output << endl;

    return 0;
}