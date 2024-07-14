```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(range(1, min(n, m))) + sum(range(min(n, m) + 1, n)) + sum(range(max(m - (n - 1), 1), m))
    return favorable_outcomes / total_outcomes