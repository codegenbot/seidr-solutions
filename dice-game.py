def roll_dice(n, m):
    total_outcomes = n * m
    p_win_count = sum(1 for _ in range(m) for i in range(1, i+1) for j in range(i+1, min(i+2, n)+1) if j > i)
    
    return p_win_count / total_outcomes