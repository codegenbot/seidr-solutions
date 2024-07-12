#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            cout << (capitalize ? (char)toupper(c) : c);
            capitalize = false;
        }
    }

    return 0;
}