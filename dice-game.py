```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = n - m - 1
    return float(favorable_outcomes) / total_outcomes