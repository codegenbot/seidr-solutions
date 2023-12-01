def tri(n):
    seq = [3]
    if n == 0:
        return seq
    seq.append(1 + n / 2) if n % 2 == 0 else seq.append(seq[-1] + seq[-2] + seq[-3])
    for i in range(3, n + 1):
        seq.append(seq[i - 1] + seq[i - 2] + seq[i - 3])
    return seq