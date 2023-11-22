def fib4(n: int):
    if n == 0:
        return 0
    if n == 1:
        return 1
    sequence = [0, 1]
    for i in range(2, n + 1):
        sequence.append(sequence[i - 1] + sequence[i - 2])
    return sequence[-1]