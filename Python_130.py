def tri(n):
    sequence = [1, 3]
    if n == 0:
        return sequence
    elif n == 1:
        return sequence[:2]
    elif n == 2:
        return sequence[:3]
    elif n == 3:
        return sequence[:4]
    else:
        for i in range(3, n+1):
            sequence.append(sequence[i-1] + sequence[i-2] + sequence[i-3])
        return sequence