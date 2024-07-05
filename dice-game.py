def dice_game(n, m):
    total_outcomes = n * m
    sum_probabilities = 0
    for i in range(1, n):
        colin_lower_outcomes = min(i, m)
        probability = colin_lower_outcomes / total_outcomes
        sum_probabilities += probability
    return sum_probabilities