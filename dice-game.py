def roll_dice(n, m):
    p_total = n
    c_total = m
    
    same_count = sum(1 for _ in range(min(n, m)) if _ == _)
    greater_count = sum(1 for _ in range(min(n, m), min(n, m) + 1) if (p_total - _) > (c_total - _))
    
    return (greater_count + same_count) / (n * m)