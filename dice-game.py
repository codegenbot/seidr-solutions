def roll_dice(n, m):
    if n > m:
        n, m = m, n
    return sum(1 for _ in range(m - i) + range(i + 1, min(n, m) + 1)) / (n * m)