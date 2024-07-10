```
def dice_game(n, m):
    total = n * m
    higher_than_colin = 0
    for i in range(1, min(n, m) + 1):
        higher_than_colin += max(0, n - i) * (m - i)
    return higher_than_colin / total if total > 0 else 0.0