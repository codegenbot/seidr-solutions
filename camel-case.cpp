#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    bool nextWordIsUpper = false;

    for (char c : input) {
        if (c == '-') {
            nextWordIsUpper = true;
        } else if (c == ' ') {
            continue;
        } else {
            if (nextWordIsUpper) {
                output += std::toupper(c);
                nextWordIsUpper = false;
            } else {
                output += c;
            }
        }
    }

    return output;
}

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }

    return 0;
}