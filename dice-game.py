def dice_game(n, m):
    return (n - 1) / n * sum(1/i for i in range(m, n+1)) / (n*m)