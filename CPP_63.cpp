#include <unordered_map>

int fibfib(int n) {
    static std::unordered_map<int, int> memo = {{0, 0}, {1, 0}, {2, 1}};
    
    if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    
    memo[n] = fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
    return memo[n];
}