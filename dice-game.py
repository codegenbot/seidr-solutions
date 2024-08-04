def dice_game(n, m):
    if n < m:
        return 0.0
    if m == 1:
        return 1.0
    if n == m:
        return 0.5

    return (n - m) / (n)