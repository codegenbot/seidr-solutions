def dice_game(n, m):
    total = n * m
    p = (n - 1) / total
    return p if n > m else 0.5 if n == m else 1 - (m - 1) / total