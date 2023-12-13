def tri(n):
    sequence = [1, 3]
    for i in range(2, n):
        sequence.append(sequence[i-2] + sequence[i-1] + sequence[i-2])
    return sequence