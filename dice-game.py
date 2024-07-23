import math
def dice_game(n, m):
    return sum((n - i) / (n * m) for i in range(m+1)) if n > m else 0