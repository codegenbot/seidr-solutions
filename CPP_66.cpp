#include <string>
#include <cassert>
#include <iostream>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0';
        } else {
            sum += tolower(c) - 'a' + 1; 
        }
    }
    return sum;
}

int main() {
    std::cout << digitSum("You arE Very Smart") << std::endl;  
    return 0;
}