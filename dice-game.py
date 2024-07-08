def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = 0
    for i in range(1, min(n, m) + 1):
        peter_wins += (n - i) / total_outcomes
    return peter_wins