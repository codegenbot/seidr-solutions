def dice_game(n, m):
    p = (n - 1) / n
    c = (m - 1) / m
    return sum([p ** i * c ** (m - i - 1) for i in range(2, min(n, m))])