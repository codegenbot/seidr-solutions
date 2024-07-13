```
def dice_game(n, m):
    if n > m:
        favorable = sum(range(1, n)) * m
        total = n * m
    elif n < m:
        favorable = sum(range(1, m)) * n
        total = n * m
    else:
        favorable = 0
        total = n * m

    return favorable / total