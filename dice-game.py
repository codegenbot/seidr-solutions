def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = (n - 1) * m + min(n, m)
    probability = strictly_higher_outcomes / (total_outcomes - min(n, m))
    return probability