def dice_game(n, m):
    p = sum(1/i for i in range(2, n+1)) / n
    c = sum(1/i for i in range(1, m+1)) / m
    return 1 - (p*c)