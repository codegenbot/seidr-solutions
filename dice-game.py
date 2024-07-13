```
def dice_game(n, m):
    if n <= m:
        return 0
    else:
        return (m + 1) / n - sum([i / n for i in range(1, m + 1)]) / n