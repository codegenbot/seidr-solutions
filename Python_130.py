def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for i in range(2, n):
            sequence.append(sequence[i - 1] + sequence[i - 2] + i)
        return sequence