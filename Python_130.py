def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3, 5]
    else:
        sequence = [1, 3, 5]
        for i in range(3, n + 1):
            sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i - 3])
        return sequence