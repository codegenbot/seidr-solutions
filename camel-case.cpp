#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string output = "";
    bool capitalize = false;
    
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                output += std::toupper(c);
                capitalize = false;
            } else {
                output += c;
            }
        }
    }
    
    std::cout << output << std::endl;
    
    return 0;
}