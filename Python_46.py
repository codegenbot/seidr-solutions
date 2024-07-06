def fib4(n):
    sequence = [0] * (n + 1)
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        for i in range(5, n + 1):
            if i <= n - 3:
                sequence[i] = sequence[i - 1] + sequence[i - 2] + sequence[i - 3]
        return sequence[n]