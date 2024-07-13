def dice_game(n, m):
    p = 0
    c = 0
    for i in range(1, min(n, m) + 1):
        c += (m - i)
    return c / (n * m)