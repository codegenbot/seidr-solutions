def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3, 1]
    else:
        sequence = [3, 1]
        for i in range(2, n + 1):
            if i % 2 == 0:
                sequence.append(i // 2 + 1)
            else:
                sequence.append(sum(sequence[i - 1 : i + 1]))
        return sequence