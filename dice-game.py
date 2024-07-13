def dice_game(n, m):
    p = 0
    for i in range(1, n - m + 2):  
        p += (n - i) / (n * m)
    return p