```
def dice_game(n, m):
    total = n * m
    higher = 0
    for i in range(1, min(n, m) + 1):
        higher += (n - i) * (m - i)
    return higher / total if total > 0 else 0.0