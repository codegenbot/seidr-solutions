def dice_game(n, m):
    total_outcomes = n * m
    peter_wins_or_ties = sum(1 for i in range(m) for j in range(1, n+1))
    return 1 - (peter_wins_or_ties / total_outcomes)