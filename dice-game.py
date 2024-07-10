```
def dice_game(n, m):
    return sum((i >= j + 1) / (n * m) for i in range(1, n+1) for j in range(m))