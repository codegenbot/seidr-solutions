def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for _ in range(m) for i in range(i+1, n))
    return peters_wins / total_outcomes