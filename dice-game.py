def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = sum(1 for i in range(m-1) for j in range(i+1, n))
    probability = strictly_higher_outcomes / total_outcomes
    return probability