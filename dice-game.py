```
def dice_game(n, m):
    if n == m:
        return 0
    else:
        return (min(n-1, m-1) / (n + m - 1))