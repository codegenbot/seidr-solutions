def dice_game(n, m):
    total_outcomes = n * m
    peter_not_wins = sum(1 for i in range(m) for j in range(1, i+1)) + sum(1 for i in range(m+1, n+1) for j in range(1, n+1))
    return peter_not_wins / total_outcomes