```
def dice_game(n, m):
    return sum(1/(n*m) for _ in range(m)) if n > m else 0