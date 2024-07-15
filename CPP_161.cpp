#include <string>
#include <cassert>
#include <algorithm> // Add this for using reverse

std::string solve(std::string s){
    bool hasLetter = false;
    for(char &c : s){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            hasLetter = true;
        }
    }
    if(!hasLetter){
        std::reverse(s.begin(), s.end()); // Correctly call the reverse function
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
}