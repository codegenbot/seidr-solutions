#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(std::cin, input);
    
    bool capitalize = true;
    bool firstWord = true;
    for(char c : input) {
        if(c == '-') {
            capitalize = true;
        } else if(c != ' ') {
            if(capitalize) {
                if(!firstWord) {
                    std::cout << (char)tolower(c);
                } else {
                    std::cout << (char)toupper(c);
                }
                capitalize = false;
                firstWord = false;
            } else {
                if(std::isalpha(c)) {
                    std::cout << c;
                }
            }
        }
    }
    
    return 0;
}