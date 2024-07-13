def dice_game(n, m):
    p = 0
    c = 0
    for i in range(1, min(n, m) + 1):
        c += (m - i)
    for i in range(min(n, m) + 1, n):
        c += m - 1
    for i in range(min(n, m) + 1, m):
        c += n - 1
    return c / (n * m)