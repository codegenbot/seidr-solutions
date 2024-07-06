def fib4(n: int):
    if n <= 1:
        return n
    else:
        sequence = [0, 1] * (n + 1)
        for i in range(2, n + 1):
            if i <= n - 3:
                sequence.append(sequence[i - 1] + sequence[i - 2])
        return sequence[n]