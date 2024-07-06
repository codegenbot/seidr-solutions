def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(min(i, j) != i for i in range(1, n)) * (n - 1)
    return favorable_outcomes / total_outcomes