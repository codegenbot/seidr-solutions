def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]

    sequence = [3]
    a, b, c = 0, 0, 3
    for i in range(1, n):
        sequence.append(a + b + c)
        a, b, c = b, c, a + b + c

    return sequence