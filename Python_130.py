def tri(n):
    seq = [3]
    if n >= 1:
        seq.append(1)
    if n >= 2:
        seq.append(1 + (2 / 2))
    if n >= 3:
        for i in range(3, n+1):
            if i % 2 == 0:
                seq.append(1 + i / 2)
            else:
                seq.append(seq[i - 1] + seq[i - 2] + seq[i + 1])
    return seq