import math

def dice_game(n, m):
    min_outcome = min(n,m)
    max_outcome = max(n,m)
    total_outcomes = n * m
    favorable_outcomes = sum(i for i in range(1,min_outcome+1) for j in range(1,i) if j<i or i>j)
    return 1 - (favorable_outcomes / total_outcomes)