def dice_game(n, m):
    if n > m:
        favorable = sum(range(m+1, n+1))  
        total = n * m
    elif n < m:
        favorable = sum(range(1, m-n+2))
        total = n * m
    else:  # n == m, no favorable outcomes
        return 0

    return favorable / total