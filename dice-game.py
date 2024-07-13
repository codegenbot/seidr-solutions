```
def dice_game(n, m):
    if n > m:
        favorable = sum(range(m+1, n)) * m
        total = n * m
    elif n < m:
        favorable = (n + 1) * sum(range(2, m-n+1))
        total = n * m
    else:
        return 0

    return favorable / total