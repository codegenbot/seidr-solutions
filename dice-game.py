```
import math

def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for i in range(m) for j in range(i+1, n+1)) + sum(1 for i in range(1, m) for j in range(1, n))
    return 2 * (peter_wins / total_outcomes)