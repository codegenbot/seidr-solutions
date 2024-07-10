"""
import math

def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for i in range(m) for j in range(i+1, n+1))
    return 1 - (peter_wins / total_outcomes)
"""