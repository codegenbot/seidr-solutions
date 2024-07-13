def dice_game(n, m):
    return sum(min(i,j)<i for i in range(1,n+1) for j in range(1,m+1)) / (n * m)