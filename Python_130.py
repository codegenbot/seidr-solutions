def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    elif n == 1:
        sequence.append(1 + sequence[0] / 2)
        return sequence
    else:
        for i in range(1, n):
            sequence.append(sequence[i] + sequence[i - 1] / 2)
        return sequence