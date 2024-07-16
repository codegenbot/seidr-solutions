def dice_game(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(m+1) for j in range(1, m+1) if i < j <= n)
    return peters_wins / total_outcomes