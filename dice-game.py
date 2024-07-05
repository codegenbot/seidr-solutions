```
import math

def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(1, min(n, m)+1) for j in range(1, max(1, m-n+1)))
    return favorable_outcomes / total_outcomes