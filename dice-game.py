```
def roll_dice(n, m):
    total_outcomes = n * m
    p_win_count = sum(1 for i in range(min(m, n) + 1) for j in range(1, i + 1) if i > j)
    
    return p_win_count / total_outcomes