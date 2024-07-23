def dice_game(n, m):
    if n > m:
        return (n - m) / n
    elif n < m:
        return (m - n) / m
    else:
        return 1/n