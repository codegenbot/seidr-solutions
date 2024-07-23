```
def dice_game(n, m):
    if n < m:
        return 1
    else:
        return round(1 - (m + 1)/n/m, 6)