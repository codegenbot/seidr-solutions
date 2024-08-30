```
def dice_game(n, m):
    return sum(1 / n for _ in range(m)) / (n * m)