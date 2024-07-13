def dice_game(n, m):
    total_outcomes = n * m
    p = 0
    for i in range(m+1, n+1):  
        p += (n - (n-i)) / total_outcomes
    return p