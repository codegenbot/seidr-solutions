def dice_game(n, m):
    p = (n - 1) / n
    q = (m - 1) / m
    return sum(min(x, y) < max(x, y) for x in range(1, min(n, m)) for y in range(1, min(n, m)))