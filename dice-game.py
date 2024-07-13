def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(i > j for i in range(1, n) for j in range(1, min(i, m)))
    return peters_wins / total_outcomes