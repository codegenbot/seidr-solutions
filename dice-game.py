```
def dice_game(n, m):
    if n < m:
        return 0
    else:
        return round((n-m)/(n*m), 6)