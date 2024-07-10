def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum((i > j) for i in range(1, n+1) for j in range(1, m+1))
    return peters_wins / total_outcomes