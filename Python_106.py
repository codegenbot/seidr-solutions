def f(n, memo={0: 1, 1: 1, 2: 2}):
    if n not in memo:
        memo[n] = n * f(n - 1, memo)
    return [memo[i] for i in range(n+1)]