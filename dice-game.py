def dice_game(n, m):
    total_outcomes = n * m
    p = (n - m) / total_outcomes + (1 - m / n)  
    return p