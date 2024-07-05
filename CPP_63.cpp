#include <unordered_map>

std::unordered_map<int, int> memo;

int fibfib(int n) {
    if (n == 0 || n == 1) return 0;
    if (n == 2) return 1;
    if (memo.find(n) != memo.end()) return memo[n];
    memo[n] = fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
    return memo[n];
}