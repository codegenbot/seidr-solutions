def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for i in range(2, n + 1):
            if i % 2 == 0:
                sequence.append(1 + i // 2)
            else:
                last_three = sequence[-3:]
                sequence.append(sum(last_three))
        return sequence