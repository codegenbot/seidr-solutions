```
def fibfib(n: int):
    if n < 0:
        return "Error: Input must be non-negative."
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        dp = [0, 1]
        for i in range(2, n + 1):
            dp.append(dp[i-1] + dp[i-2])
        return dp[-1]