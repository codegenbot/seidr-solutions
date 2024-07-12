def tri(n):
    seq = [0] * (n + 1)
    seq[1] = 3
    for i in range(2, n + 1):
        if i % 2 == 0:
            seq[i] = 1 + i // 2
        else:
            seq[i] = seq[i - 1] + seq[i - 2] + seq[i + 1]
    return seq