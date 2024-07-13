def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = (n-m) if m < n else 0
    return favorable_outcomes / total_outcomes