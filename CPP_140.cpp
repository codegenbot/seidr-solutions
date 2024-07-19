#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result;
    bool lastSpace = false;
    int consecutiveSpaces = 0;
    for(char c : text){
        if(c == ' '){
            if(lastSpace){
                consecutiveSpaces++;
            } else {
                lastSpace = true;
                consecutiveSpaces = 1;
            }
            if(consecutiveSpaces > 2){
                result.pop_back();
                result.pop_back();
                result += "-";
            } else {
                result += '_';
            }
        } else {
            result += c;
            lastSpace = false;
            consecutiveSpaces = 0;
        }
    }
    return result;
}

int main() {
    assert (fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    
    return 0;
}