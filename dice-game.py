def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = sum((min(i, n - j),) for i in range(1, min(m+1,n)) for j in range(1,m+1) if i > j)
    probability = len(strictly_higher_outcomes) / total_outcomes
    return probability