def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = 0
    for i in range(1, min(n, m)):
        strictly_higher_outcomes += (n - i) * m
    same_outcomes = (min(n, m) - 1) ** 2
    probability = (strictly_higher_outcomes + total_outcomes - same_outcomes) / total_outcomes
    return probability