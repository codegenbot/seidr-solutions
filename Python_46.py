
def fib4(n: int):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        memo = [0, 1, 1]
        for i in range(3, n - 2):
            if i >= 3 and i - 2 < len(memo):
                memo.append(memo[i - 3] + memo[i - 2])
    if len(memo) < n:
        memo.append(0)
    return memo[n]