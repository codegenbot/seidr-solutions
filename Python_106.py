def f(n, memo={0: 1}):
    def helper(n, memo):
        if n not in memo:
            memo[n] = n * helper(n - 1, memo)
        return memo[n]

    for i in range(n + 1):
        helper(i, memo)

    return [memo[i] for i in range(n + 1)]