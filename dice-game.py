def dice_game(n, m):
    return (min(n, m) - max(1, min(n, m)) + 1) / (n + m - 1) if n != m else 0