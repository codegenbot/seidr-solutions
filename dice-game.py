def dice_game(n, m):
    if n > m:
        return (n - m) / (n + m)
    elif n < m:
        return (m - n) / (m + n)
    else:
        return 0.5