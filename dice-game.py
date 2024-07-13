def dice_game(n, m):
    if n > m:
        favorable = sum(range(1, n+1)) * m
        total = n * m
    elif n < m:
        favorable = sum(range(1, m+1)) * n
        total = n * m
    else:
        favorable = 0
        total = n * m

    return favorable / total