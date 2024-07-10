def roll_dice(n, m):
    total_outcomes = n * m
    p_win_count = sum(min(i-1, j) for i in range(1, n+1) for j in range(1, m+1))
    
    return p_win_count / total_outcomes