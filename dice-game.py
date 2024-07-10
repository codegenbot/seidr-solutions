def dice_game(n, m):
    if n > m:
        return 1 - ((n - m) / (n * m))
    elif n < m:
        return 1 - ((m - n) / (m * n))
    else:
        return 0