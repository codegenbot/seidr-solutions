```
def fibfib(n: int):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        memo = {0: 0, 1: 1}
        for i in range(2, n+1):
            memo[i] = memo[i-1] + memo[i-2]
        return sum(memo[i] for i in range(n+1))