def dice_game(n, m):
    total_combinations = (n + m - 1)
    losing_combinations = sum(min(i, j) == i for i in range(1, n+1) for j in range(1, m+1))
    return 1 - losing_combinations / total_combinations