def dice_game(n, m):
    return sum((n-i+1)/(n*m) for i in range(min(n-1,m)))