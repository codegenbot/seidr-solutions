"""
import math

def dice_game(n, m):
    total_outcomes = n*m
    win_prob = sum(1 for i in range(m+1, n*m) if (i % n > i % m)) / total_outcomes
    return win_prob
"""