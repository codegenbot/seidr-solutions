def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for _ in range(2, n + 1):
            if _ % 2 == 0:
                sequence.append(int(_ / 2) + (sequence[-1] if _ > 1 else 1))
            else:
                sequence.append(sum(sequence[-2:]))
        return sequence