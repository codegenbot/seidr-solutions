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
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    std::string output = "Sum of bits is: " + std::to_string(solve(N));
    std::cout << output << std::endl;
}