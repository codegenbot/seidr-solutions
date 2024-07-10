def dice_game(n, m):
    total = n * m
    peters_win = sum(
        1
        for i in range(m + 1)
        for j in range(i)
        if min((n - 1) * j + 1, n) > max((m - 1) * i + 1, 1)
    )
    return peters_win / total