def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(1, n+1) for j in range(m) if i >= j+1)
    return peters_wins / total_outcomes