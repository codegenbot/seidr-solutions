```
def dice_game(n, m):
    return sum(1 for _ in range(m-1) for _ in range(n-1)) / (n * m)