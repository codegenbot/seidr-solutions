#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = true;
    for(char c : input) {
        if(c == '-' || c == ' ') {
            capitalize = true;
        } else {
            if(capitalize) {
                cout << (char)toupper(c);
                capitalize = false;
            } else {
                cout << (char)tolower(c);
            }
        }
    }
    
    return 0;
}