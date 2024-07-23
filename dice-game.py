import math
def roll_dice(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for _ in range(n) if _ > i)
    for j in range(m):
        peters_wins += (n - j)
    return peters_wins / total_outcomes