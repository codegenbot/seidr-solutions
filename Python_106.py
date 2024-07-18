def f(n, memo={0: 1, 1: 1}):
    if n not in memo:
        memo[n] = n * f(n - 1, memo)
    return memo[n]