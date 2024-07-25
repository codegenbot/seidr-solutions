def dice_game(n, m):
    return (n - m) / (n + m - 1) if n > m else (m - n) / (n + m - 1)