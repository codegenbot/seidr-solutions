def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        while len(sequence) <= n:
            sequence.append(sum(sequence[-2:] + [sum(sequence[-1:])]))
        return sequence