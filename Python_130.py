def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]
    sequence = [3, 2]
    for i in range(2, n + 1):
        if i % 2 == 0:
            sequence.append(1 + i // 2)
        else:
            sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i - 3])
    return sequence