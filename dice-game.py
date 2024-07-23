import math


def dice_game(n, m):
    return sum([i / (n * m) for i in range(m)]) - sum(
        [i / (n * m) for i in range(1, m + 1)]
    )