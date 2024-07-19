```cpp
#include <iostream>
#include <string>

int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if(std::isdigit(c)) {
            sum += static_cast<int>(c - '0');
        }
    }
    return sum;
}

int main() {
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    std::cout << "The sum of digits is: " << digitSum(std::to_string(num)) << std::endl;
    return 0;
}