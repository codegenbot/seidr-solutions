def dice_game(n, m):
    total_outcomes = n * m
    probability = sum(1 for i in range(1, min(n,m)+1) for j in range(1, max(n,m)) if i > j)
    return probability / total_outcomes