def roll_dice(n, m):
    total_outcomes = n * m
    p_highest_count = sum(1 for _ in range(min(n, m) + 1, n + 1) if _ > max(range(m + 1), min(m, 1)))
    
    return p_highest_count / total_outcomes