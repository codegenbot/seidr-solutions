def tri(n):
    seq = [3]
    if n > 0:
        seq.append(1 + n / 2) if n % 2 == 0 else seq.append(tri(n - 1) + tri(n - 2) + tri(n + 1))
    return seq[:n + 1]