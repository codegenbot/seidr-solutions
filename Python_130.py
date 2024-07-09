def tri(n):
    if n == 0:
        return [3, 2, 1, 3]
    elif n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3]
    else:
        sequence = [1, 3]
        for _ in range(2, n):
            sequence.append(sum(sequence[-1::-1]))
        return sequence