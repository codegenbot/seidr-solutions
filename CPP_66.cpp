#include <iostream>
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) { 
            sum += std::stoi(std::string(1, c)); 
        }
    }
    return sum;
}

int main() {
    std::cout << "digitSum: " << digitSum("You arE Very Smart") << std::endl;
    return 0;
}