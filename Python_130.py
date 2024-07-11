def tri(n):
    if n == 0:
        return [3]

    sequence = [3]

    for i in range(1, n + 1):
        if i % 2 == 0:
            sequence.append(i // 2 + 1)
        else:
            a, b = sequence[-2], sequence[-1]
            sequence.append(a + b + (a - 1) // 2 + 1)

    return sequence