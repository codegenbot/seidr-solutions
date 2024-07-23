import math


def dice_game(n, m):
    prob_equal = min(n, m) / (n * m)
    return 1 - prob_equal