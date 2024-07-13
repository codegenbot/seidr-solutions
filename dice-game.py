```
def dice_game(n, m):
    total = n * m
    peters_wins = sum(range(1, n+1)) * (m // 2) + min(n, m) * (n - m)
    return peters_wins / total