def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    elif n == 1:
        sequence.append(1 + sequence[0] // 2)
        return sequence
    else:
        for i in range(2, n + 1):
            sequence.append(sequence[i - 1] + sequence[i - 2] // 2)
        return sequence