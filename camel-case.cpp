#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(std::cin, input);
    
    bool capitalize = true;
    for(char c : input) {
        if(c == '-') {
            capitalize = true;
        } else if(c != ' ') {
            if(capitalize) {
                std::cout << (char)tolower(c);
                capitalize = false;
            } else {
                std::cout << c;
            }
        }
    }
    
    return 0;
}