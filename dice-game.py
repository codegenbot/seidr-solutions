def dice_game(n, m):
    if n < m:
        return 0.0
    if m < n:
        return (n - m) / (n)
    return 0.5