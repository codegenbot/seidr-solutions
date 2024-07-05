```
import math

def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(1, min(n, m)+1) for j in range(max(1, i-1), i+1) for k in range(1, m+1) if k >= j)
    return 1 - favorable_outcomes / total_outcomes