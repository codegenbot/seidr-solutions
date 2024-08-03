def tri(n):
    if n == 0:
        return []
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        sequence = [3, 2]
        for i in range(3, n + 1):
            if i % 2 == 0:
                sequence.append(1 + i // 2)
            else:
                a, b = sequence[-2], sequence[-1]
                sequence.append(a + b + 1)
    return sequence