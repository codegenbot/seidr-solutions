def fib4(n):
    sequence = [0] * (n + 1)
    for i in range(3, n + 1):
        if i <= n - 3:
            sequence[i] = sequence[i - 1] + sequence[i - 2] + sequence[i - 3]
    return sequence[n]