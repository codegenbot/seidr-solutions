import math

def roll_higher(n, m):
    total_combinations = n * m
    higher_rolls = 0
    for i in range(1, n+1):
        if i > 1:
            higher_rolls += math.comb(m, i-1)
    return higher_rolls / total_combinations