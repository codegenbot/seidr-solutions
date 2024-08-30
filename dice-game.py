import math

def dice_game(n, m):
    if n < m:
        return 0
    else:
        total_combinations = n * m
        ways_peter_wins = sum(1 for r in range(m+1, n+1) for _ in range(m))
        probability = ways_peter_wins / total_combinations
        return probability