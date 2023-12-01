def tri(n):
    sequence = [1, 3]
    if n == 0:
        return []
    elif n == 1:
        return [1]
    elif n == 2:
        return sequence
    else:
        for i in range(2, n + 1):
            if i % 2 == 0:
                sequence.append(1 + i // 2)
            else:
                sequence.append(sequence[i - 1] + sequence[i - 2] + sequence[i + 1])
        return sequence