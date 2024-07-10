def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for _ in range(n*m) if min(max(_ // m, m), n-1) < max(_ % n, 1))
    return 1 - (peter_wins / total_outcomes)