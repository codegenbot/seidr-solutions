def dice_game(n, m):
    if n > m:
        return (n - m) / n
    elif n == m:
        return 0
    else:
        return (m - n) / m