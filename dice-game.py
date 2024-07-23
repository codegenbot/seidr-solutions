def roll_dice(n, m):
    return 1 - sum(min(i-1, m-1) / (n*m-1) for i in range(1, n+1)) / (n * m)