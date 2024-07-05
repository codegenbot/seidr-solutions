```
def dice_game(n, m):
    return sum((i > m) * 1.0 / (n * m) for i in range(1, n+1))