#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

int digitSum(const std::string& s){
    int sum = 0;
    for(char c : s){
        if(std::isupper(c)){
            sum += c - 'A' + 1;
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}