#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                std::cout << (char)toupper(c);
                capitalize = false;
            } else {
                std::cout << c;
            }
        }
    }
    
    return 0;
}