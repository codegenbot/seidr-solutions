def roll_dice(n, m):
    total_outcomes = n * m
    probability = sum((n - j) / total_outcomes for j in range(1, m)) 
    return probability