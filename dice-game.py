def dice_game(n, m):
    return sum([((n-i)/n) for i in range(1,m)])