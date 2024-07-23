def dice_game(n, m):
    if n == m:
        return 0
    total_prob = 0
    for i in range(1, min(m, n)):
        if n > m:  
            total_prob += (n - i) * 1 / (m)
        else:  
            total_prob += (i-1) * 1 / (n)
    return round(total_prob, 6)