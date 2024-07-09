def dice_game(n, m):
    return sum(
        1 / n / m for i in range(min(n, m)) if (i + 1) * n > m * max(m, 1)
    ) / min(n, m)