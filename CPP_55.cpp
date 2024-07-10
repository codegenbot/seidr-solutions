#include <iostream>
#include <unordered_map>

int fib(int n) {
    if (n < 0) {
        return -1; // Error code for invalid input
    }

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
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    return 0;
}