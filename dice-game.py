def dice_game(n, m):
    if n < m:
        return 0
    total_outcomes = n * m
    favorable_outcomes = (n - m) * m + sum(range(1, m + 1)) * (n - m)
    return favorable_outcomes / total_outcomes