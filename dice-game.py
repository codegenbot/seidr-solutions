def dice_game(n, m):
    return sum(
        1 / (n * m)
        for i in range(min(n, m) - 1)
        for j in range(max(m, n) - min(n, m) + 1)
        if i + j + 1 == n
    )