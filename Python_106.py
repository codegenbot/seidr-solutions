
def f(n, memo={0: 1}):
    if n == 0:
        return [1]
    if n not in memo:
        memo[n] = n * f(n - 1)[-1]
    return [memo[i] for i in range(n+1)]