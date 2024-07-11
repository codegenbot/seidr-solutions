def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(min(n, m), n) for j in range(1, min(i, m) + 1))
    return favorable_outcomes / total_outcomes