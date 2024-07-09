```
def dice_game(n, m):
    return sum(1 for i in range(m) if i+1 < min(n, m)) / (n*m)