def dice_game(n, m):
    same_or_lower = sum(i * (n - 1) for i in range(1, min(n, m)))
    return (m + same_or_lower) / (n * m)