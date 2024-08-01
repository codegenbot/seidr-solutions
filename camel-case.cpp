#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string input;
    getline(cin, input);

    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            cout << static_cast<char>(toupper(c));
            capitalize = false;
        } else {
            cout << c;
        }
    }

    return 0;
}