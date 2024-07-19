```cpp
#include <iostream>

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
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    std::cout << "Sum of bits is: " << solve(N) << std::endl;
}