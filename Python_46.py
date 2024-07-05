def fib4(n):
    if n > 12:
        return 0
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        memo = [0, 1, 1]
        for i in range(5, n + 1):
            if i >= 3 and i - 2 < len(memo):
                memo.append(memo[i - 3] + memo[i - 2])
    if n <= len(memo):
        return memo[n]
    else:
        # Handle the error or raise a more specific exception
        pass