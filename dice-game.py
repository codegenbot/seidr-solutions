def dice_game(n, m):
    return (sum(range(1, n+1)) - sum(range(1, m+1))) / (n * m)