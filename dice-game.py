```Python
import math
def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for _ in range(m-1))
    return peter_wins / total_outcomes