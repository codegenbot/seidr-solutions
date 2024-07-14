```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(1, min(m, n)):
        favorable_outcomes += max(m - i, 0) * n + max(n - i, 0)
    return favorable_outcomes / total_outcomes