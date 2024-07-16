Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string input) {
    std::string output;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            i++; // skip the -
            while (i < input.size() && input[i] == ' ') {
                i++; // skip the spaces
            }
            output += std::toupper(input[i]);
        } else if (input[i] == ' ') {
            continue; // skip the space
        } else {
            output += input[i];
        }
    }
    return output;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        std::string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}