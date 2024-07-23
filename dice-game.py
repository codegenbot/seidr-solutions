def roll_dice(n, m):
    return 1 - sum(min(i, j) <= j for i in range(1, n+1) for j in range(1, m+1)) / (n * m)