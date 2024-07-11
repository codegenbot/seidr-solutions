#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cassert>

std::string solve(const std::string& s) {
    std::string result = s;
    
    for(char& c : result){
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    if(std::count_if(result.begin(), result.end(), ::isalpha) == 0){
        std::reverse(result.begin(), result.end());
    }
    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");

    return 0;
}