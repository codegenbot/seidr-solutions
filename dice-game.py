```
def roll_dice(n, m):
    total_outcomes = n * m
    p_wins = sum(min(i, j) < max(i, j) for i in range(1, n+1) for j in range(1, m+1))
    
    return p_wins / total_outcomes