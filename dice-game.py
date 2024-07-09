def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(min(i, j) < max(i, j) for i in range(1, n+1) for j in range(1, m+1))
    return 1.0 * favorable_outcomes / total_outcomes