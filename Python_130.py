def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    elif n == 1:
        sequence.append(n // 2)
        return sequence
    else:
        sequence.append(n // 2)
        for i in range(2, n + 1):
            if i % 2 == 0:
                sequence.append(i // 2)
            else:
                sequence.append(sequence[i - 1] + sequence[i - 2])
        return sequence