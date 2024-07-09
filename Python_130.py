def tri(n):
    sequence = [3, 2]
    for _ in range(2, n):
        sequence.append(sum(sequence[-1::-1]))
    return sequence