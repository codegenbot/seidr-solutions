import math

def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    else:
        return round(1 - (m / n) ** m, 6)