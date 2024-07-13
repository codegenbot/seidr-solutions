def dice_game(n, m):
    total = n * m
    colin_wins = sum(range(1, min(m, n))) + (min(m, n) - 1) * (n > m)
    return 1 - colin_wins / total