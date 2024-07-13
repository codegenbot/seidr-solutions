def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = sum(1 for j in range(m+1, n) for i in range(m))
    probability = strictly_higher_outcomes / total_outcomes
    return probability