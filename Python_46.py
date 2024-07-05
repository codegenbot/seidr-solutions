
def fib4(n: int):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        memo = [0, 1, 1]
        for i in range(6, n + 1):
            memo.append(memo[i - 3] + memo[i - 2])
        return memo[n]