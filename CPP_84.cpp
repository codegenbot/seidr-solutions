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
    if (!(std::cin >> N)) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }
    std::string str = std::to_string(N); 
    int sum = solve(std::stoi(str)); 
    std::cout << "Sum of bits is: ";
    std::cout << sum;
    std::cout << std::endl;
}