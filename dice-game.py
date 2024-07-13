def dice_game(n, m):
    if n > m:
        favorable = sum(1 for i in range(m+1) for j in range(i+1, n+1))
        total = n * m
    elif n < m:
        favorable = sum(1 for i in range(1, m-n+2) for j in range(n+1))
        total = n * m
    else:
        return 0.5

    return favorable / total