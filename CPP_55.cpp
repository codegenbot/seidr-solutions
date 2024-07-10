#include <unordered_map>

std::unordered_map<int, int> memo = {{0, 0}, {1, 1}};

int fib(int n) {
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    int result = fib(n - 1) + fib(n - 2);
    memo[n] = result;

    return result;
}