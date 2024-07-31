def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for _ in range(2, n + 1):
            if _ % 2 == 0:
                sequence.append(_ // 2 + 1)
            else:
                a, b = sequence[-2], sequence[-1]
                sequence.append(a + b + (a + b) // (_ // 2))
        return sequence