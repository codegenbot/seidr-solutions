def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(range(1, n - m + 1)) / total_outcomes
    return peter_wins