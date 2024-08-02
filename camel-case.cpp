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
                std::cout << toupper(c);
                capitalize = false;
            } else {
                std::cout << c;
            }
        }
        if(c == ' ') {
            capitalize = true;
            std::cout << " ";
        }
    }
    
    return 0;
}