def dice_game(n, m):
    total = n * m
    if n > m:
        favorable = sum(range(n+1, n*m+1))
    elif n < m:
        favorable = sum(range(m+1, n+m*m+1))
    else:
        favorable = 0

    return favorable / total