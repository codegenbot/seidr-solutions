#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    bool first = true;
    for (char c : input) {
        if (c == '-') {
            cout << "";
            first = true;
        } else if (c == ' ') {
            cout << ' ';
            first = true;
        } else {
            if (first) {
                cout << (char)toupper(c);
                first = false;
            } else {
                cout << c;
            }
        }
    }
    
    return 0;
}