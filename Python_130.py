def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]
    seq = [0, 3]
    for i in range(2, n):
        if i % 2 == 0:
            seq.append(seq[i-1] + seq[i-2] + seq[i-3])
        else:
            seq.append(1 + i // 2)
    return seq