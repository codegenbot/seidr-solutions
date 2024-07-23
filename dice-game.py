```
def dice_game(n, m):
    return sum(1 for i in range(1, n) for j in range(1, min(i, m))) / (n * m)