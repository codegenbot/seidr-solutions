#include <cassert>
#include <cstdlib>
#include <iostream>

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;
    if(N < 1) {
        std::cout << "Error: Input should be a positive integer." << std::endl;
    } else {
        int expected = 15150; 
        if(solve(963) != expected) {
            std::cerr << "Assertion failed: Expected " << expected << ", got " << solve(963) << std::endl;
            exit(1); 
        }
    }
    return 0;