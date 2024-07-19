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
    std::cout << "Enter a number: ";
    int N;
    if (!(std::cin >> N)) { 
        std::cout << "Invalid input. Please enter a non-zero integer." << std::endl;
        return 1;
    }
    if (N == 0) {
        std::cout << "Sum of bits is: 0" << std::endl; 
    } else {
        std::cout << "Sum of bits is: " << solve(N) << std::endl;
    }
    return 0;
}