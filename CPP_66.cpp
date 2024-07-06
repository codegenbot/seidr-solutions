#include <iostream>
#include <string>

int digitSum(std::string s){
    int sum = 0;
    for (char c : s) {
        if(isupper(c)) {
            sum += (int)c - 55; 
        }
    }
    return sum;
}

int main() {
    std::cout << digitSum("You arE Very Smart") << std::endl;
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}