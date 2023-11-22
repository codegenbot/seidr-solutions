def tri(n):
    sequence = [3, 1]

    if n == 0:
        return sequence
    elif n == 1:
        return sequence

    for i in range(2, n):
        sequence.append(sequence[i-1] + sequence[i-2])

    return sequence[:n+2]