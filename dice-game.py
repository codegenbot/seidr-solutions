```
def roll_dice(n, m):
    return 1 - n/m if n > m else 1 - m/n if n < m else 0.5