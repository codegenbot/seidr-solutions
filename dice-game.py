def roll_dice(n, m):
    p_total = n
    c_total = m
    
    same_or_greater_count = sum(min(p-1, c) for p in range(1, p_total+1) for c in range(1, c_total+1) if p > c)
    
    return same_or_greater_count / (p_total * c_total)