def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for i in range(m) for j in range(1, n+1) if (j)*m + i > (i+1)*m)
    return peter_wins / total_outcomes