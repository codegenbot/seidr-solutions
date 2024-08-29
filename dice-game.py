def dice_game(n, m):
    return sum((n-i)/(n+m-1) for i in range(1,m+1))