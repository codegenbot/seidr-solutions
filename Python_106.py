def f(n):
    memo = {0: 1, 1: 1}
    for i in range(2, n + 1):
        memo[i] = memo[i - 1] * (i + 1) // (i - 1)
    return [memo[i] for i in range(n + 1)]