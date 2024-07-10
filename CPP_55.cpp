#include <unordered_map>

std::unordered_map<int, int> memo;

int fib(int n) {
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