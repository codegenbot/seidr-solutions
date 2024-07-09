"""
def roll_dice(n, m):
    p_total = n * (n + 1) // 2
    c_total = m * (m + 1) // 2
    
    same_or_greater_count = sum((p - c) for p in range(min(n, m) + 1, n + 1) for c in range(1, min(m, n)))
    
    return same_or_greater_count / (n * m)