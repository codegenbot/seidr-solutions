def dice_game(n, m):
    total = 0
    for i in range(1, m+1):
        total += (n-i)/(n*m)
    return min(total, 1)