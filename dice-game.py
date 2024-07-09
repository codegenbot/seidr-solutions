def dice_game(n, m):
    return sum((n-m+1)/n**k for k in range(m))