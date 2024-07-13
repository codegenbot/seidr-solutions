def dice_game(n, m):
    total = n * m
    if n > m:
        return sum(range(m+1, n+1)) / total
    else:
        return sum(range(1, m)) / total