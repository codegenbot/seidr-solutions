```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(min(i, j) < i - j for i in range(1, n) for j in range(1, m))
    return favorable_outcomes / total_outcomes