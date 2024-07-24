def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3, 2]
        for i in range(3, n + 1):
            if i % 2 == 0:
                sequence.append(i // 2 + 1)
            else:
                sequence.append(sum(sequence[-2:]))
        return sequence