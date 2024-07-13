def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = sum(min(i, j) + 1 for i in range(1, n+1) for j in range(1, m+1))
    probability = (total_outcomes - strictly_higher_outcomes) / total_outcomes
    return probability