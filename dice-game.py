```
def roll_dice(n, m):
    p_total = n
    c_total = m
    
    same_or_greater_count = sum(1 for _ in range(min(n, m), 1) if (p_total - _) > (c_total - _))
    
    return same_or_greater_count / (n * m)