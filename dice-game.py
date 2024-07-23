import math
def dice_game(n, m):
    return sum(1/math.comb(m, i) for i in range(1, min(n-1, m)))