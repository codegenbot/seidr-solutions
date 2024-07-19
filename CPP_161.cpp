#include <string>
#include <algorithm>
#include <cctype>

std::string solve(const std::string& s) {
    for(char &c : s) {
        if(std::isalpha(c)) {
            if(std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    
    std::reverse(s.begin(), s.end());
    
    return s;
}

// In the main function
int main() {
    assert(solve("a2b$c") == "C2B$A");
    assert(solve("Hello, World!") == "!DLR,O LLEH");
    
    return 0;
}