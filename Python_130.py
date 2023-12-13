def tri(n):
    sequence = [1, 3]
    if n == 0:
        return []
    elif n == 1:
        return sequence[:2]
    else:
        for i in range(2, n+1):
            sequence.append(sequence[i - 2] + sequence[i - 1] + 1)
        return sequence[:n+1]