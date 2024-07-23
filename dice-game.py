import math
def dice_game(n, m):
    return sum((i/m) for i in range(1, min(n, m)+1))