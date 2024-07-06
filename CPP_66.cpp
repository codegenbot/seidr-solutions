#include <iostream>
#include <string>

int digitSum(std::string s){
    int sum = 0;
    for (char c : s) {
        if(isupper(c)) {
            sum += (int)c - 55; // subtract ASCII value of 'A' - 1
        }
    }
    return sum;
}

int main() {
    std::cout << digitSum("You arE Very Smart") << std::endl;
    return 0;
}