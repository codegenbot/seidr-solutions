import math


def dice_game(n, m):
    return sum(math.comb(n - 1, i) / (n * m) for i in range(min(n - 1, m)))