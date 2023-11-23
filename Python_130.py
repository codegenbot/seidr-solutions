def tri(n):
    seq = [3]
    if n == 0:
        return seq
    seq.append(1 + n / 2) if n % 2 == 0 else seq.append(seq[n - 1] + seq[n - 2] + seq[n + 1])
    for i in range(2, n + 1):
        seq.append(seq[i - 1] + seq[i - 2] + seq[i + 1]) if i % 2 != 0 else seq.append(1 + i / 2)
    return seq