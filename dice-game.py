import math
def dice_game(n, m):
    if n > m:
        return 1 - (n + m) / (n * m)
    else:
        return (m + 1) / (n * m)