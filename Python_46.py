def fib4(n: int):
    if n < 0:
        raise ValueError("n must be a non-negative integer")
    if n <= 3:
        return [0, 0, 2, 0][n]

    fib4_sequence = [0, 0, 2, 0]
    for i in range(4, n + 1):
        fib4_sequence.append(
            fib4_sequence[i - 1]
            + fib4_sequence[i - 2]
            + fib4_sequence[i - 3]
            + fib4_sequence[i - 4]
        )

    return fib4_sequence[n]