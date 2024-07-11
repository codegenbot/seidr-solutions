def fib4(n: int):
    if n < 0:
        return "Input should be a non-negative integer."
    elif n == 0 or n == 1:
        return 0
    elif n == 2:
        return 2
    elif n == 3:
        return 0
    else:
        fib4_sequence = [0, 0, 2, 0]
        for i in range(4, n + 1):
            fib4_sequence.append(
                fib4_sequence[i - 1]
                + fib4_sequence[i - 2]
                + fib4_sequence[i - 3]
                + fib4_sequence[i - 4]
            )
        return fib4_sequence[n]