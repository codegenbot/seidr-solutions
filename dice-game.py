def dice_game(n, m):
    total_outcomes = n * m
    probability = sum(1 for i in range(min(n,m)+1) for j in range(i+1) if i > j)
    return (total_outcomes - probability) / total_outcomes