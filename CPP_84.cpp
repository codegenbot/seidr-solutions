```cpp
#include <iostream>
#include <string>

int solve(int N) {
    std::string str;
    while (N > 0) {
        int remainder = N % 2;
        str += std::to_string(remainder == 0 ? 0 : 1);
        N /= 2;
    }
    int sum = 0;
    for (char c : str) { 
        if (c == '1')
            sum++;
    }
    return sum;
}

void printResult(int N) {
    int sum = solve(N);
    std::cout << "Sum of bits is: " << sum << std::endl;
}

int main() {
    std::cout << "Enter a number: ";
    int N;
    std::cin >> N;
    if (N == 0) {
        std::cout << "Invalid input. Please enter a non-zero integer." << std::endl;
        return 1;
    }
    printResult(N);
    return 0;
}