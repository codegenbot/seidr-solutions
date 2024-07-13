def dice_game(n, m):
    total_outcomes = n * m
    probability = sum(1 for i in range(min(n,m)+1) for j in range(1, i) if i > j)
    return probability / total_outcomes