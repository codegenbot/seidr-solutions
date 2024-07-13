def dice_game(n, m):
    total = n * m
    if n == m:
        return 0.5
    else:
        p = (n - m) / (n - 1)
        return p