```
def dice_game(n, m):
    return sum((m + 1) / n for _ in range(m)) / (n * m)