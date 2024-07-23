def dice_game(n, m):
    if n == m:
        return 0
    total_prob = 0
    for i in range(1, min(m, n)):
        if n > m:  
            total_prob += (n - i) * (i-1) / (m * n)
        else:  
            total_prob += (i-1) * (m - i+1) / (n * m)
    return round(total_prob, 6)