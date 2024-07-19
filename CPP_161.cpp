#include <iostream>
#include <algorithm>

std::string solve(std::string s){
    for(char &c : s){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(all_of(s.begin(), s.end(), [](char c){ return !isalpha(c); })){
        reverse(s.begin(), s.end());
    }
    return s;
}

int main(){
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;

    std::cout << "Output: " << solve(input) << std::endl;

    return 0;
}