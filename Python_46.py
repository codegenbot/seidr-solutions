def fib4(n: int):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        sequence = [0, 0, 2]
        for i in range(5, n + 1):
            try:
                sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i - 3])
            except IndexError:
                return -1
        return sequence[n]