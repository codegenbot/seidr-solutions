import math

def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(min(n,m)+1) for j in range(max(1,i-1),i+1) if j<i)
    return 1 - favorable_outcomes / total_outcomes