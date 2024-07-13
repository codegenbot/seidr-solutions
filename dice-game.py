def dice_game(n, m):
    total_outcomes = n * m
    p = 0
    for i in range(1, m):  
        p += (n - m + i) / total_outcomes
    return p