def dice_game(n, m):
    total_outcomes = n * m
    peters_greater_count = sum(min(i, j) < j for i in range(1, n + 1) for j in range(1, m + 1))
    return peters_greater_count / total_outcomes