```
def dice_game(n, m):
    return sum(min(k, n-1)/n for k in range(1, m)) + min(m-1, n-1)/n