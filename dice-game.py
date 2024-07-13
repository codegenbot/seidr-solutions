def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = (n - 1) * (m - 1)
    probability = strictly_higher_outcomes / total_outcomes
    return probability