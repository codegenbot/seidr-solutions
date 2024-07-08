def dice_game(n, m):
    total = sum((n-i)/(n*m) for i in range(1, m+1))
    total += n/m
    return min(total, 1)