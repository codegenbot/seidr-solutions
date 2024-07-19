```cpp
#include <iostream>
#include <string>

std::string solve(int N);

int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    std::cout << "Sum of bits is: " << solve(N) << std::endl;
}

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        int remainder = N % 2;
        sum += remainder;
        N /= 2;
    }
    return std::to_string(sum);
}