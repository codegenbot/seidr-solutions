def game(n, m):
    total = n * m
    p = 0.0
    for i in range(1, min(n, m) + 1):
        p += (n - i) * (m - i) / total
    return p