def tri(n):
    if n == 0:
        return []
    elif n == 1:
        return [3]
    elif n == 2:
        return [1, 3]
    else:
        sequence = [1, 3]
        for i in range(2, n):
            if i % 2 == 0:
                sequence.append(i // 2 + 1)
            else:
                a, b = sequence[-2], sequence[-1]
                sequence.append(a + b + (a + b) + 1)
        return sequence