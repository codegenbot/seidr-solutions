
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
        } else if(c == ' ') {
            capitalize = true;
            std::cout << " ";
        } else {
            if(capitalize) {
                std::cout << (char)toupper(c);
                capitalize = false;
            } else {
                std::cout << (char)tolower(c);
            }
        }
    }
    
    return 0;
}