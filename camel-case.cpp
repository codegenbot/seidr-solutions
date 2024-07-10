#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    std::string input;
    getline(std::cin, input);

    bool capitalize = false;
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            cout << (char)toupper(c);
            capitalize = false;
        } else {
            cout << c;
        }
    }

    return 0;
}