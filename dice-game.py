```
def dice_game(n, m):
    return sum((i < j) / (n * m) for i in range(1, n+1) for j in range(1, min(i, m)+1))