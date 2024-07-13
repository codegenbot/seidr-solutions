def dice_game(n, m):
    total = n * m
    p = 0
    for i in range(1, min(n, m) + 1):
        p += max((n - i), (m - i)) / total
    return round(p, 4)