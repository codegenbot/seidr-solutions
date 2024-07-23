import math


def dice_game(n, m):
    return math.fsum([1 / i for i in range(m + 1, n)]) / (n * m - 1)