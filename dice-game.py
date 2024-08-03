def dice_game(n, m):
    return sum(1 / n for _ in range(m)) if n > m else 1 - sum(1 / m for _ in range(n))