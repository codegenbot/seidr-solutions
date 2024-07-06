def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        memo = {0: 0, 1: 1}
        for i in range(2, n + 1):
            memo[i] = memo.get(i - 1, 0) + memo.get(i - 2, 0)
            if i > 1:
                memo[i-1] = memo.get(i - 2, 0) + memo.get(i - 3, 0)
                memo[i-2] = memo.get(i - 3, 0)
        return memo[n]