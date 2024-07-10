#include <iostream>
#include <unordered_map>

int fib(int n) {
    static std::unordered_map<int, int> memo = {{0, 0}, {1, 1}};

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    if (n <= 1) {
        return n;
    }

    int result = fib(n - 1) + fib(n - 2);
    memo[n] = result;

    return result;
}

int solveProblem(){
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Fibonacci number at position " << n << " is: " << fib(n) << std::endl;

    return 0;
}