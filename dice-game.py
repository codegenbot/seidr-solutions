def dice_game(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return (m - 1) / n