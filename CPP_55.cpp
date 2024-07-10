#include <unordered_map>

int fib(int n, std::unordered_map<int, int>& memo) {
    if (n <= 1)
        return n;
    
    if (memo.find(n) != memo.end())
        return memo[n];
    
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    
    return memo[n];
}

// Example usage in main function:
// std::unordered_map<int, int> memo;
// assert(fib(12, memo) == 144);