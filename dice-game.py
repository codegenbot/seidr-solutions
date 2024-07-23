def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    else:
        same_outcomes = min(n, m)
        return round(1 - same_outcomes / (n * m), 6)