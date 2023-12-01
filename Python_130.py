def tri(n):
    seq = [1, 3]
    for i in range(3, n + 1):
        if i % 2 == 0:
            seq.append(seq[i - 1] + seq[i - 2] + seq[i - 3])
        else:
            seq.append(seq[i - 1] + seq[i - 2] + seq[i])
    return seq