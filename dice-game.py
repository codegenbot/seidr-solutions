```
def dice_game(n, m):
    return sum((n - k + 1) / (n * m) for k in range(m+1, n+1))