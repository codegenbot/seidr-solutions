def fib4(n: int):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        sequence = [0, 0, 2]
        for i in range(5, n + 1):
            if i < len(sequence):
                sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i - 3])
            else:
                return "Error: Index out of range"
        return sequence[n]