```
def roll_dice(n, m):
    total_outcomes = n * m
    p_win_count = sum(1 for i in range(m + 1) for j in range(1, min(i, n) + 1) if i > j)
    
    colin_win_count = sum(1 for i in range(1, m + 1) for j in range(m + 1, n + 1))
    
    return p_win_count / total_outcomes