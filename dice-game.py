def roll_dice(n, m):
    p_win_count = sum(1 for k in range(1, n+1) for j in range(1, min(k, m)+1) if k > j)
    
    return p_win_count / (n * m)