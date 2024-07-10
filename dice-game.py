def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for _ in range(m) for j in range(min(j+1,n),n+1))
    return peter_wins / total_outcomes