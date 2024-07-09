def roll_dice(n, m):
    p_total = n
    c_total = m
    
    probability = sum((i + 1) / (n * p_total) for i in range(m - 1)) 
    return probability