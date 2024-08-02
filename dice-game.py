def dice_game(n, m):
    return sum(
        1 / (n * m)
        for i in range(min(n, m), max(n, m))
        if (i + 1) / n > (m - i) / (m + 1)
    )