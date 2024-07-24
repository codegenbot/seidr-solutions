def dice_game(n, m):
    if n < m:
        return 0.0
    total_outcomes = n * m
    favorable_outcomes = (n - m) * (m - 1)
    probability = favorable_outcomes / total_outcomes
    return probability