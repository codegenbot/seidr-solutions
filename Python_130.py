def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    if n % 2 == 0:
        sequence.append(1 + n // 2)
    else:
        sequence += tri(n - 1) + tri(n - 3) + [2 + n // 2]
    return sequence