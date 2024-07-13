```
def dice_game(n, m):
    return (sum(range(n)) - sum(range(1,m+1))) / (n*m)