def dice_game(n, m):
    p = 0
    c = 0
    for i in range(1, min(n, m) + 1):
        if i <= n and i <= m:
            p += (n - i) * (m - i)
        elif n >= m:
            p += (n - i) * 1
    return p / (n * m)