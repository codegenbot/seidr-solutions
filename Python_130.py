def tri(n):
    if n == 0:
        return [3]

    if n == 1:
        return [1, 3]

    sequence = [1, 3]
    for i in range(2, n + 1):
        if i % 2 == 0:
            sequence.append(i // 2 + 1)
        else:
            a, b = sequence[-2], sequence[-1]
            sequence.append(a + b + (i - 1) // 2 + 1)

    return sequence