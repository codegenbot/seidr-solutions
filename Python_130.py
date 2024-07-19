def tri(n):
    sequence = [3]

    for i in range(1, n + 1):
        if i % 2 == 0:
            sequence.append(1 + i // 2)
        else:
            sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i - 3])

    return sequence