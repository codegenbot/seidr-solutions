```
def dice_game(n, m):
    return sum(1/i/n/m for i in range(m-1, n)) if n > m else 0