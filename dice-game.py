import math


def dice_game(n, m):
    return 1 - (n - 1) / (n * m) - (m) / (n * m)