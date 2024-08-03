def dice_game(n, m):
    if n > m:
        return 1 - (m / (n + m - 1))
    elif n < m:
        return 1 - (n / (m + n - 1))
    else:
        return 0.5