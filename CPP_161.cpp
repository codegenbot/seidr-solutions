#include <string>
#include <algorithm>
#include <cctype>

std::string solve(const std::string& s) {
    std::string modified = s;
    
    for(char &c : modified) {
        if(std::isalpha(c)) {
            if(std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    
    std::reverse(modified.begin(), modified.end());
    
    return modified;
}

int main() {
    assert(solve("Hello, World!") == "!DLROw ,OLLEh");
    assert(solve("aBcDeFg") == "gFEdCbA");
    
    return 0;
}