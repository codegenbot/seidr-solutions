#include <unordered_map>
#include <iostream>

std::unordered_map<int, int> memo = {{0, 0}, {1, 1}};

int fib(int n) {
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    int result;
    if (n == 0) {
        result = 0;
    } else if (n == 1) {
        result = 1;
    } else {
        result = fib(n - 1) + fib(n - 2);
    }

    memo[n] = result;

    return result;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    std::cout << "Fibonacci number at position " << n << " is: " << fib(n) << std::endl;

    return 0;
}