#include <iostream>
#include <unordered_map>

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    static std::unordered_map<int, int> memo;

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    int result = fib(n - 1) + fib(n - 2);
    memo[n] = result;
    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int fibonacci = fib(n);

    std::cout << "Fibonacci number at position " << n << " is: " << fibonacci << std::endl;

    return 0;
}