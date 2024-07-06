def fib4(n):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        sequence = [0, 0, 2]
        for i in range(4, n + 1):
            if i <= n - 3:
                sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i - 3])
        return sequence[n]