def dice_game(n, m):
    return sum(1/i/j for i in range(2,n+1) for j in range(1,m)) / n/m