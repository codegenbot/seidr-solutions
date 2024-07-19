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
    char str[256];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 256);
    int N = std::stoi(str);
    if (N == 0) {
        std::cout << "Invalid input. Please enter a non-zero integer." << std::endl;
        return 1;
    }
    std::cout << "Sum of bits is: " << solve(N) << std::endl;
    return 0;
}