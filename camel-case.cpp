#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = false;
    for (char& c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize && islower(c)) {
                c = toupper(c);
                capitalize = false;
            } else if (!capitalize && isupper(c)) {
                c = tolower(c);
            }
        } else {
            capitalize = false;
        }
    }
    
    cout << input << endl;
    
    return 0;
}