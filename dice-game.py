```
def dice_game(n, m):
    return 1 - sum(1 for _ in range(min(n, m))) / (n*m)