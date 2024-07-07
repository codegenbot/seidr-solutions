```cpp
#include <iostream>
#include <cassert>

int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += (c - '0'); 
        }
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "digitSum: " << digitSum(input) << std::endl;
    return 0;
}