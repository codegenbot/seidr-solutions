def tri(n):
    sequence = [3]
    if n == 0:
        return []
    elif n == 1:
        return sequence[:1]
    else:
        for i in range(2, n):
            sequence.append(sequence[i - 2] + sequence[i - 1] + 1)
        return sequence