import math
def dice_game(n, m):
    return (1 / n) * sum(1/math.comb(k + m - 1, k) for k in range(m - 1))