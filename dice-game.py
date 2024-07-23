def dice_game(n, m):
    if n < m:
        return 0
    return round((n-1)/n/m + (m-1)/n/m, 6)