def dice_game(n, m):
    return sum(1 / i / math.comb(n + m - 1, n) for i in range(1, m)) / math.comb(
        n + m - 1, n + m - 2
    )