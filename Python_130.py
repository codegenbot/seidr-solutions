def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3, 2]

    sequence = [1, 3, 2]

    for _ in range(3, n + 1):
        next_num = sum(sequence[-1::-1])
        sequence.append(next_num)

    return sequence