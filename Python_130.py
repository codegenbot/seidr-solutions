def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        sequence = [1, 3]
        for i in range(2, n + 1):
            if i % 2 == 0:
                sequence.append(1 + i // 2)
            else:
                sequence.append(sequence[-1] + sequence[-2] + sequence[-3])
        return sequence