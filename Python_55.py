def fib(n: int):
    if n <= 1:
        return n
    memo = {0: 0, 1: 1}
    for i in range(2, n + 1):
        memo[i] = memo[i - 1] + memo[i - 2]
    return memo[n]