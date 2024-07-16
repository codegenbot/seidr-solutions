```
def dice_game(n, m):
    return sum((1/i) * (n-m-1)/(n+m-2) for i in range(1,m)) / n