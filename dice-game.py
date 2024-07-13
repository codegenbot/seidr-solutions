```
def dice_game(n, m):
    return sum(1/k for k in range(1, n)) / (n * m)