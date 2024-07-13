def dice_game(n, m):
    p = 0
    for i in range(1, n - m + 2):  
        p += (n - i) / (n * m)
    return p - sum((1/m) for _ in range(min(n,m)))