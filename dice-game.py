def dice_game(n, m):
    if m == 1:
        return 1
    elif n < m:
        return 0
    else:
        return round(1 - (m/(n)), 6)