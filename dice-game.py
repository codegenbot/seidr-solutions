def dice_game(n, m):
    total = n * m
    colin_wins = sum(range(1, min(m, n))) + (n > m) * (m - 1)
    return 1 - colin_wins / total