#include <iostream>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    bool upperCase = false;
    for (char c : input) {
        if (c == '-') {
            upperCase = true;
        } else {
            if (upperCase) {
                cout << (char)toupper(c);
                upperCase = false;
            } else {
                cout << c;
            }
        }
    }

    return 0;
}