import math


def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    else:
        equal_rolls = min(n-1, m-1) + 1
        total_outcomes = n * m
        p = (n - 1) / n
        q = (m - 1) / m
        return round(1 - (p * q) - equal_rolls/total_outcomes, 6)