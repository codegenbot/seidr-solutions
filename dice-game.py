def dice_game(n, m):
    if n > m:
        favorable = n - m - 1
    elif n < m:
        favorable = m - n - 1
    else:  
        return 0.5

    total = max(n, m) ** 2
    return favorable / total