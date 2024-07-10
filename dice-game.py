def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for _ in range(min(n,m)+1))
    return 1 - (peter_wins / total_outcomes)