def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for i in range(m) for j in range(2, min(n,m)+1) if (j-1)*m + i < j*m)
    return 1 - (peter_wins / total_outcomes)