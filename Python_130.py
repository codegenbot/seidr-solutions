def tri(n):
    sequence = [3]
    if n == 0:
        return sequence
    
    for i in range(1, n+1):
        if i % 2 == 0:
            sequence.append(1 + i // 2)
        else:
            sequence += [x + 2**i for x in sequence]
    
    return sequence