def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_or_equal_outcomes = sum(1 for i in range(m) for j in range(i+1, n+1))
    probability = strictly_higher_or_equal_outcomes / total_outcomes
    return probability