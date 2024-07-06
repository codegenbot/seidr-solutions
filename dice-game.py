def dice_game(n, m):
    return sum(1/i for i in range(min(n,m)) if (n-i)>m) / (n*m)