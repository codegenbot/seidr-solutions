#include <iostream>
#include <string>
#include <cassert>

int digitSum(std::string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += c - 'A' + 1;
        }
    }
    return sum;
}

int main(){
    std::string input;
    std::getline(std::cin, input);
    std::cout << digitSum(input) << std::endl;
    return 0;
}