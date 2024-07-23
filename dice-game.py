```
def dice_game(n, m):
    return sum((n-i)/(n*m) for i in range(1, min(n, m)+1))