#include <iostream>
#include <string>

std::string camelCase(const std::string& input) {
    std::string output;
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            output += std::toupper(c);
            capitalizeNext = false;
        } else {
            output += c;
        }
    }

    return output;
}

int main() {
    int nTests;
    cin >> nTests;

    for (int i = 0; i < nTests; ++i) {
        std::string str;
        cin >> str;
        cout << camelCase(str) << endl;
    }

    return 0;
}