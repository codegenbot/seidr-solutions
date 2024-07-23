import math


def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    else:
        p = (n - 1) / n
        q = (m - 1) / m
        return round(1 - (p**m + q**n), 6)