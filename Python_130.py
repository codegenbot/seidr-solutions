def tri(n):
    sequence = [3]

    if n == 1:
        return sequence

    sequence.append(1)

    for i in range(2, n+1):
        sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i - 3])

    return sequence