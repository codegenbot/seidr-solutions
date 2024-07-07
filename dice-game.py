from itertools import product

def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i, j in product(range(1, n), range(1, m)) if i > j)
    return favorable_outcomes / total_outcomes