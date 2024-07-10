def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(1, min(n+1, m+1)) for j in range(m+1) if i > j or (i == j and i < n))
    return peters_wins / total_outcomes