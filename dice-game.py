def dice_game(n, m):
    if n > m:
        return 1 - (m / (n + m))
    elif n < m:
        return m / (n + m)
    else:
        return 0.5