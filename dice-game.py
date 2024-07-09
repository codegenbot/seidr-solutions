```
import math

def roll_dice(n, m):
    total_outcomes = n * m
    probability = sum((i + 1) / (n * m) for i in range(min(n - 1, m))) 
    return probability