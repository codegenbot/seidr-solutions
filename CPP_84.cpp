```cpp
#include <iostream>
#include <string>

int solve(int N) {
    int sum = 0;
    while (N > 0) {
        int remainder = N % 2;
        sum += remainder;
        N /= 2;
    }
    return sum;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int N = std::stoi(str);
    if (N == 0) {
        std::cout << "Invalid input. Please enter a non-zero integer." << std::endl;
        return 1;
    }
    std::cout << "Sum of bits is: " << solve(N) << std::endl;
    return 0;
}