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
            std::cout << (capitalize ? (char)toupper(c) : c);
            capitalize = false;
        }
    }
    
    return 0;
}