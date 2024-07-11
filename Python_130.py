def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        sequence = [3, 2]
        for i in range(2, n):
            if i % 2 == 0:
                sequence.append(1 + i / 2)
            else:
                a, b = sequence[-2], sequence[-1]
                sequence.append(a + b + (sequence[0] if i > 2 else 3))
        return sequence