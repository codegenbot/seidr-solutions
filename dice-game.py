def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = (n - 1) * m + n * (m - 1)
    return favorable_outcomes / total_outcomes