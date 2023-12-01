def tri(n):
    sequence = [3]
    for i in range(1, n):
        if i == 1:
            sequence.append(1)
        else:
            sequence.append(sequence[i-1] + sequence[i-2] + sequence[i])
    return sequence