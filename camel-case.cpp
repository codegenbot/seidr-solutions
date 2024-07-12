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
        } else if (capitalize) {
            c = toupper(c);
            capitalize = false;
        } else {
            c = tolower(c);
        }
    }

    cout << input << endl;

    return 0;
}