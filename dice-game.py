def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(range(1, n - m + 1)) / (n * m)
    return peter_wins