def fib4(n):
    memo = [0, 1, 1]
    for i in range(5, n + 1):
        for j in range(3):
            if memo[j] < memo[i - 3]:
                memo.append(memo[j] + memo[i - 2])
                break
        else:
            memo.append(memo[i - 1] + memo[i - 2])
    return memo[n]