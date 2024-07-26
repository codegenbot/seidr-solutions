#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string solve(std::string s){
    for(char &c : s){
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }

    int left = 0, right = s.size() - 1;
    while(left < right){
        std::swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

int main(){
    assert(solve("#ccc") == "#CCC");
    std::cout << "All assertions passed.\n";
    return 0;
}