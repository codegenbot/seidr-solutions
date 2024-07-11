```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(i > j for i in range(1, n) for j in range(1, min(i, m) + 1))
    return favorable_outcomes / total_outcomes