```
def dice_game(n, m):
    p = 0
    for i in range(1, min(n, m)):
        p += (n - i) / n * (m - i + 1) / m
    return p