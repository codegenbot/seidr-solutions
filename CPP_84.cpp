#include <iostream>
#include <string>

int solve(int N) {
    std::string str;
    while (N > 0) {
        int remainder = N % 2;
        str.push_back(remainder + '0'); 
        N /= 2;
    }
    int sum = 0;
    for (char c : str) { 
        if (c == '1')
            sum++;
    }
    return sum;
}

int main() {
    std::cout << "Enter a number: ";
    int N;
    std::cin >> N;
    if (N == 0) {
        std::cout << "Invalid input. Please enter a non-zero integer." << std::endl;
        return 1;
    }
    std::cout << "Sum of bits is: " << solve(N) << std::endl;
    return 0;
}